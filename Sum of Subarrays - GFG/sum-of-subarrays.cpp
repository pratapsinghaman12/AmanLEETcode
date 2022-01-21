// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    long long int m=1000000007;
    long long subarraySum(long long arr[], long long n)
    {
        long long ans=0;
        long long sum=0;
        long long x=0;
        for(int i=0;i<n;i++)
        {
            x=((i+1)%m*(n-i)%m)%m;
            sum=((arr[i])%m*(x)%m)%m;
            ans=(ans%m+sum%m)%m;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
 {
     long long t; 
     cin>>t;
     while(t--)
     {
         long long n; cin>>n;
         long long a[n+5];
         for(long long i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.subarraySum(a, n)<<endl;
     }
    return 0;
}
  // } Driver Code Ends