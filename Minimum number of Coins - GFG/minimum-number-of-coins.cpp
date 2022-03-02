// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
vector<int>arr={1,2,5,10,20,50,100,200,500,2000};
vector<int>v;
    vector<int> minPartition(int n)
    {
        int sum=n;
        int j=9;
        while(sum!=0&&j>=0)
        {
            if(arr[j]<=sum)
            {
                sum=sum-arr[j];
                v.push_back(arr[j]);
            }
            else
            {
                j--;
            }
        }
        return v;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends