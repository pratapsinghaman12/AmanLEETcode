class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s[0]==']'||s[0]=='}'||s[0]==')')
        {
            return false;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                if(st.top()=='('&&s[i]==')'||st.top()=='['&&s[i]==']'||st.top()=='{'&&s[i]=='}')
                {
                   st.pop();
                }
                else
                {
                   return false;
                }
            }
        }
        return st.empty();
    }
};