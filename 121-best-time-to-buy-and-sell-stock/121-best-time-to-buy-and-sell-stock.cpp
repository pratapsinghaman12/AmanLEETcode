class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==1)
        {
            return 0;
        }
        int res= prices[1]-prices[0];
        int less=prices[0];
        for(int i=1;i<n;i++)
        {
            res=max(res,prices[i]-less);
            less=min(less,prices[i]);
        }
        if(res<0)
        {
            return 0;
        }
        return res;
    }
};