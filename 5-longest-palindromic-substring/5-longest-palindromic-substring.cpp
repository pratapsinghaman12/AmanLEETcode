class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        bool dp[n][n];
        int ans=0;
        string res="";
        for(int g=0;g<n;g++)
        {
            for(int i=0,j=g;j<n;i++,j++)
            {
                if(g==0)
                {
                    dp[i][j]=true;
                }
                else if(g==1)
                {
                    if(s[i]==s[j])
                    {
                        dp[i][j]=true;
                    }
                    else
                    {
                        dp[i][j]=false;
                    }
                }
                else
                {
                    if(s[i]==s[j]&&dp[i+1][j-1]==true)
                    {
                        dp[i][j]=true;
                    }
                    else
                    {
                        dp[i][j]=false;
                    }
                }
                if(dp[i][j]==true)
                {
                    if(j-i+1>ans)
                   
                    {
                        ans=j-i+1;
                        res="";
                        res=s.substr(i,ans);
                    }
                }
            }
        }
        return res;
    }
};