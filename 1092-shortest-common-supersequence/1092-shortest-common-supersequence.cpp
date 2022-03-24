class Solution {
public:
    string find(string s1,string s2)
    {
        int n= s1.size();
        int m= s2.size();
        string dp[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0||j==0)
                {
                    dp[i][j]="";
                }
                else if(s1[i-1]==s2[j-1])
                {
                    dp[i][j]= dp[i-1][j-1] + s1[i-1];
                }
                else
                {
                    dp[i][j]= dp[i-1][j].size()>dp[i][j-1].size()?dp[i-1][j]:dp[i][j-1];
                }
            }
        }
        return dp[n][m];
    }
    string shortestCommonSupersequence(string str1, string str2) {
        string lcs= find(str1,str2);
        
        int n=str1.size();
        int m=str2.size();
        string ans="";
        int i=0;
        int j=0;
        for(auto x:lcs)
        {
            while(str1[i]!=x)
            {
                ans+=str1[i];
                i++;
            }
            while(str2[j]!=x)
            {
                ans+=str2[j];
                j++;
            }
            ans+=x;
            i++;
            j++;
        }
        ans+= str1.substr(i);
        ans+= str2.substr(j);
        return ans;
    }
};