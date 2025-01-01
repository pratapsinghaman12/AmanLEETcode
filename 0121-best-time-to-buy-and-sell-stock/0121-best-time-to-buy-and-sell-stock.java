class Solution {
    public int maxProfit(int[] prices) {
        int currMin = prices[0];
        int ans = 0;
        for(int i = 0;i<prices.length;i++){
            ans = Math.max(ans, prices[i] - currMin);
            currMin = Math.min(currMin, prices[i]);
        }
        return ans;
    }
}