// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long int count(int s[], int N, int sum) {

       long long int dp[sum+1][N+1];
       
       for(int i=0;i<=N;i++)
       {
           dp[0][i]=1;
       }
       
        for(int i=1;i<=sum;i++)
       {
           dp[i][0]=0;
       }
       
       for(int i=1;i<=sum;i++)
       {
           for(int j=1;j<=N;j++)
           {
               dp[i][j]=dp[i][j-1];
               
               if(s[j-1]<=i)
               {
                   dp[i][j]+=dp[i-s[j-1]][j];
               }
           }
       }
       return dp[sum][N];
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