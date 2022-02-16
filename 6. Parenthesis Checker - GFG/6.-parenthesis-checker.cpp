// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
   
    bool ispar(string s)
    {
        stack<char> st;
        for(auto x:s)
        {
            if(x=='('||x=='['||x=='{')
            {
                st.push(x);
            }
            else if(x==')'||x==']'||x=='}')
            {
                if(st.empty()==true)
                {
                    return false;
                }
                else if(x==')'&&st.top()=='('||x==']'&&st.top()=='['||x=='}'&&st.top()=='{')
                {
                   st.pop();
                }
                else
                {
                    return false;
                }
                
            }
        }
        if(st.empty()==true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends