class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_pr1=INT_MAX;
        int profit1=0;
        int min_pr2=INT_MAX;
        int profit2=0;
        for(int i=0;i<prices.size();i++)
        {
            min_pr1=min(min_pr1,prices[i]);
            profit1=max(profit1,prices[i]-min_pr1);
            min_pr2=min(min_pr2,prices[i]-profit1);
            profit2=max(profit2,prices[i]-min_pr2);
            
        }
        return profit2;
    }
};