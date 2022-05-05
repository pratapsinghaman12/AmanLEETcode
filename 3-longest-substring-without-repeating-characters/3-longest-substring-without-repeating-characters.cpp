class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.size();
        int i=0;
        int res=0;
        vector<int>v(256,-1);
        for(int j=0;j<n;j++)
        {
            i=max(i,v[s[j]]+1);
            res=max(res,j-i+1);
            v[s[j]]=j;
        }
        return res;
    }
};