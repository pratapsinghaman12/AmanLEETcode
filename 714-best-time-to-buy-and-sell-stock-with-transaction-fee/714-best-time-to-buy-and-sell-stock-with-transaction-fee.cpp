class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n= prices.size();
        
        int obs=-prices[0];
        int oss=0;
        
        for(int i=1;i<n;i++)
        {
            int nbs=0;
            int nss=0;
            
            if(obs>oss-prices[i])
            {
                nbs=obs;
            }else
            {
                nbs=oss-prices[i];
            }
            
            if(oss<prices[i]-fee+obs)
            {
                nss=prices[i]-fee+obs;
            }else
            {
                nss=oss;
            }
            
            oss=nss;
            obs=nbs;
        }
        return oss;
    }
};