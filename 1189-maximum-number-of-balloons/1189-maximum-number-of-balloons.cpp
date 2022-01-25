class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        for(auto x:text)
        {
            mp[x]++;
        }
        
        string s="balon";
        int ans=INT_MAX;
        for(auto x:s)
        {
            if(x=='b')
            {
               ans=min (mp[x],ans);
            }
            else if(x=='a')
            {
                ans=min(mp[x],ans);
            }
            else if(x=='l')
            {
                ans=min(mp[x]/2,ans);
            }
            else if(x=='o')
            {
                ans=min(mp[x]/2,ans);
            }
            else
            {
                 ans=min(mp[x],ans);
            }
            
        }
        return ans;
    }
};