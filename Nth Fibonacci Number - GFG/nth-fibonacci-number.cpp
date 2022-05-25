// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        long long int arr[1001];
        arr[1]=1;
        arr[2]=1;
       for(int i=3;i<=n;i++)
       {
           arr[i]=(arr[i-1]%1000000007+arr[i-2]%1000000007)%1000000007;
       }
       return arr[n]%1000000007;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends