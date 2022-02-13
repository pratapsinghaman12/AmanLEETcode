class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n= prices.size();
        
        int i_min=prices[0];
        
        int ans=INT_MIN;
        
        for(int i=1;i<n;i++)
        {
            ans=max(ans,prices[i]-i_min);
            
            i_min=min(i_min,prices[i]);
        }
        return ans>0?ans:0;
    }
};