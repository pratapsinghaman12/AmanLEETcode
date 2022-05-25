class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>count_s(26,0);
        vector<int>count_p(26,0);
        vector<int>ans;
        int k=p.size();
        int n=s.size();
        if(k>n)
        {
            return ans;
        }
        for(int i=0;i<k;i++)
        {
            count_p[p[i]-'a']++;
            count_s[s[i]-'a']++;
        }
        if(count_p==count_s)
            {
                ans.push_back(0);
            }
        for(int i=k;i<n;i++)
        {
            count_s[s[i]-'a']++;
            count_s[s[i-k]-'a']--;
            if(count_p==count_s)
            {
                ans.push_back(i-k+1);
            }
            
        }
        return ans;
    }
};