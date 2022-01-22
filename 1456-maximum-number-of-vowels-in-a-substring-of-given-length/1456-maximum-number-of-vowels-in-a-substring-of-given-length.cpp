class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char>st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
         st.insert('o');
         st.insert('u');
        int count=0;
        int res=0;
        for(int i=0;i<k;i++)
        {
            if(st.find(s[i])!=st.end())
            {
                count++;
            }
        }
        res=count;
        
        int i=0;
        int j=k;
        while(j<s.size())
        {
            if(st.find(s[j])!=st.end())
            {
                count++;
            }
            if(st.find(s[i])!=st.end())
            {
                count--;
            }
            res=max(res,count);
            i++;
            j++;
        }
        return res;
    }
};