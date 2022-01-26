// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int N) 
    { 
      int arr[N+1][W+1];
       for(int i=0;i<=W;i++)
       {
           arr[0][i]=0;
       }
       
       for(int i=0;i<=N;i++)
       {
           arr[i][0]=0;
       }
       
       for(int i=1;i<=N;i++)
       {
           for(int j=1;j<=W;j++)
           {
               if(wt[i-1]>j)
               {
                   arr[i][j]=arr[i-1][j];
               }
               
               else
               {
                   arr[i][j]=max(arr[i-1][j],val[i-1]+arr[i-1][j-wt[i-1]]);
               }
           }
       }
       return arr[N][W];
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends