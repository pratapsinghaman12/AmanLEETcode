class Solution {
public:
    int maximalSquare(vector<vector<char>>& mat) {
        int n=mat.size();
		int m=mat[0].size();
		int dp[n+1][m+1];
		int ans=0;
		if(n==0)
		{
			return 0;
		}
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=m;j++)
			{
				if(i==0||j==0)
				{
					dp[i][j]=0;
				}
				else if(mat[i-1][j-1]=='0')
				{
					dp[i][j]=0;
				}
				else
				{
					dp[i][j]= 1+ min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
					ans=max(ans,dp[i][j]);
				}
			}
		}
		return ans*ans;
    }
};