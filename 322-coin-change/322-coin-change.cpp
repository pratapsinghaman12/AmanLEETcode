class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int N=coins.size();
        
        int dp[N+1][amount+1];
        
        for(int i=1;i<=amount;i++)
        {
            dp[0][i]=1e5;
        }
        
        for(int i=0;i<=N;i++)
        {
            dp[i][0]=0;
        }
        
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=amount;j++)
            {
                if(coins[i-1]>j)
                {
                    dp[i][j]=dp[i-1][j];
                }
                else
                {
                    dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
                }
            }
        }
        if(dp[N][amount]!=1e5)
        {
             return dp[N][amount];
        }
        return -1;
    }
};