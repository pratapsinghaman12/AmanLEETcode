class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>v(26,INT_MAX);
        for(int i=0;i<s.size();i++)
        {
            if(v[s[i]-'a']==INT_MAX)
            {
                v[s[i]-'a']=i;
            }
            else
            {
                v[s[i]-'a']=-1;
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<26;i++)
        {
            if(v[i]==INT_MAX||v[i]==-1)
            {
                continue;
            }
            else
            {
                ans=min(ans,v[i]);
            }
        }
        if(ans==INT_MAX)
        {
            return -1;
        }
        return ans;
    }
};