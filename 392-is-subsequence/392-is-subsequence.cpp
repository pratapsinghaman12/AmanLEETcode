class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        
        if(n>m)
        {
            return false;
        }
        
        int i=m-1;
        int j=n-1;
        
        while(i>=0&&j>=0)
        {
            if(t[i]==s[j])
            {
                i--;
                j--;
            }
            else
            {
                i--;
            }
        }
        
        if(j<0)
        {return true;}
        return false;
    }
};