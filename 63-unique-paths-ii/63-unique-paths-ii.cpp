class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int dp[m][n];
        
        for(int i=0;i<n;i++)
        {
            if(matrix[0][i]==0)
            {
                dp[0][i]=1;
            }
            else
            {
                while(i<n)
                {
                    dp[0][i]=0;
                    i++;
                }
                break;
            }
        }
        
         for(int i=0;i<m;i++)
        {
            if(matrix[i][0]==0)
            {
                dp[i][0]=1;
            }
            else
            {
                while(i<m)
                {
                    dp[i][0]=0;
                    i++;
                }
                break;
            }
        }
        
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(matrix[i][j]==1)
                {
                    dp[i][j]=0;
                }
                else
                {
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
            }
        }
        return dp[m-1][n-1];
        
    }
};