// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool aman_fun(int arr[],int n,int sum)
    {
        bool dp[n+1][(sum/2)+1];
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=true;
        }
        for(int i=1;i<=sum/2;i++)
        {
            dp[0][i]=false;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum/2;j++)
            {
                dp[i][j]=dp[i-1][j];
                if(j>=arr[i-1])
                {
                    dp[i][j]= (dp[i][j]||dp[i-1][j-arr[i-1]]);
                }
            }
        }
        return dp[n][sum/2];
    }
    int equalPartition(int n, int arr[])
    {
        int sum=accumulate(arr,arr+n,0);
        if(sum%2!=0)
        {
            return 0;
        }
        
        if(aman_fun(arr,n,sum)==true)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends