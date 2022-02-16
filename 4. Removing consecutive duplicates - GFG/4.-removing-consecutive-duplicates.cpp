// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string s)
    {
        stack<char>st;
        st.push(s[0]);
        string s1= "";
        s1=s1+s[0];
        for(int i=1;i<s.size();i++)
        {
            if(s[i]!=st.top())
            {
                s1=s1+s[i];
                st.push(s[i]);
            }
        }
        
       return s1;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.removeConsecutiveDuplicates(s)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends