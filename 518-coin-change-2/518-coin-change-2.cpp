class Solution {
public:
    int change(int amount, vector<int>& coins) {
            int N=coins.size();
        
        int dp[N+1][amount+1];
        
        for(int i=1;i<=amount;i++)
        {
            dp[0][i]=0;
        }
        
        for(int i=0;i<=N;i++)
        {
            dp[i][0]=1;
        }
        
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=amount;j++)
            {
                
                    dp[i][j]=dp[i-1][j];

                
                if(coins[i-1]<=j)
                {
                    dp[i][j]+= dp[i][j-coins[i-1]];
                }
            }
        }
        return dp[N][amount];
    }
};