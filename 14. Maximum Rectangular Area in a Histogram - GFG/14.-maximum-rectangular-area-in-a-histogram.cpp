// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
  
    vector<int> aman_nse(long long arr[],int n)
    {
         vector<int>nse(n,n);
          stack<int>st;
         st.push(n-1);
         for(int i=n-2;i>=0;i--)
         {
             while(!st.empty()&&arr[i]<=arr[st.top()])
             {
                 st.pop();
             }
             if(!st.empty())
             {
                 nse[i]=st.top();
             }
             st.push(i);
         }
         return nse;
         
    }
    
     vector<int> aman_pse(long long arr[],int n)
    {
         vector<int>pse(n,-1);
          stack<int>st;
          st.push(0);
          for(int i=1;i<n;i++)
          {
              while(!st.empty()&&arr[st.top()]>=arr[i])
              {
                  st.pop();
              }
              if(!st.empty())
              {
                  pse[i]=st.top();
              }
              st.push(i);
          }
          return pse;
    }
    
    
    
    

    long long getMaxArea(long long arr[], int n)
    {
       vector<int>nse=aman_nse(arr,n);
       vector<int>pse=aman_pse(arr,n);
       long long res=INT_MIN;
       for(int i=0;i<n;i++)
       {
          res=max(res,arr[i]*(nse[i]-pse[i]-1)); 
       }
       return res;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends