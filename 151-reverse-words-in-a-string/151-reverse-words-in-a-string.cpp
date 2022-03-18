class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        stringstream ss(s);
        string temp;
        while(ss>>temp)
        {
            v.push_back(temp);
        }
        reverse(v.begin(),v.end());
        string ans="";
        for(int i=0;i<v.size()-1;i++)
        {
            ans+=v[i];
            ans+=" ";
        }
        ans+=v[v.size()-1];
        return ans;
    }
};