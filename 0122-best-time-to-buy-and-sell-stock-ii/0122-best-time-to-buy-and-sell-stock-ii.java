class Solution {
    public int maxProfit(int[] prices) {
        int currMin = prices[0];
        int ans = 0;
        for(int i = 1;i<prices.length;i++){
           if(prices[i] > currMin){
            ans += prices[i] - currMin;
           }
           currMin = prices[i];
        }
        return ans;
    }
}