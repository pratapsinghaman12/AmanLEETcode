// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    int  i=0;
     int res=0;
    vector<int>v(256,-1);
    for(int j=0;j<s.size();j++)
    {
        i= max(i,v[s[j]]+1);
        res= max(res,j-i+1);
        v[s[j]]=j;
    }
    return res;
}