// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long int count(int s[], int N, int sum) {

       long long int dp[N+1][sum+1];
       
       for(int i=1;i<=sum;i++)
       {
           dp[0][i]=0;
       }
       
        for(int i=0;i<=N;i++)
       {
           dp[i][0]=1;
       }
       
       for(int i=1;i<=N;i++)
       {
           for(int j=1;j<=sum;j++)
           {
               dp[i][j]=dp[i-1][j];
               
               if(s[i-1]<=j)
               {
                   dp[i][j]+=dp[i][j-s[i-1]];
               }
           }
       }
       return dp[N][sum];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends