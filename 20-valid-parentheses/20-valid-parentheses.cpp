class Solution {
public:
    bool check(char x,char y)
    {
        if(x=='('&&y==')'||x=='{'&&y=='}'||x=='['&&y==']')
        {
            return true;
        }
        return false;
    }
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty()==true)
                {
                    return false;
                }
                if(check(st.top(),s[i])==false)
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
        }
       return st.empty();
    }
};