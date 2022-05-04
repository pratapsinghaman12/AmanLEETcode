class Solution {
public:
    string reverseWords(string s) {
        int start=0;
        for(int e=0;e<s.size();e++)
        {
            if(s[e]==' ')
            {
                reverse(s.begin()+start,s.begin()+e);
                start=e+1;
            }
        }
        reverse(s.begin()+start,s.end());
        return s;
    }
};