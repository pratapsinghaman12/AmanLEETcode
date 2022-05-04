// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
       int start=0;
        for(int e=0;e<s.size();e++)
        {
            if(s[e]=='.')
            {
                reverse(s.begin()+start,s.begin()+e);
                start=e+1;
            }
        }
        reverse(s.begin()+start,s.end());
        reverse(s.begin(),s.end());
        return s;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends