// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            st.push(i);
        }
        while(st.empty()==false)
        {
            if(st.size()==1)
            {
                break;
            }
            int i= st.top();
            st.pop();
            int j= st.top();
            st.pop();
          
            if(M[i][j]==1&&M[j][i]==0)
            {
                st.push(j);
            }
            else if(M[j][i]==1&&M[i][j]==0)
            {
                st.push(i);
            }
        }
        
        if(st.empty()==true)
        {
            return -1;
        }
        
        for(int i=0;i<n;i++)
        {
            if(M[st.top()][i]!=0)
            {
                return -1;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(M[i][st.top()]!=1&&i!=st.top())
            {
                return -1;
            }
        }
        return st.top();
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends