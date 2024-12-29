class Solution {
    public int maxScore(int[] cardPoints, int k) {
        int n = cardPoints.length;
        int totalSum = 0;
        for(int x : cardPoints){
            totalSum += x;
        }
        
        int window = n - k;
        int myMin = 0;
        int currSum = 0;

        for(int i = 0; i < window;i++){
            currSum += cardPoints[i];
        }

        myMin = currSum;

        for(int i = window; i < n; i++){
            currSum = currSum + cardPoints[i] - cardPoints[i - window];
            myMin = Math.min(myMin, currSum);
        }
        return totalSum - myMin;
    }
}