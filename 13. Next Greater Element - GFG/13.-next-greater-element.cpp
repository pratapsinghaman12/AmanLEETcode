// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
   
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long>v(n,-1);
        stack<long long>st;
        st.push(arr[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            while(!st.empty()&&arr[i]>st.top())
            {
                st.pop();
            }
            if(!st.empty())
            {
                v[i]=st.top();
            }
            st.push(arr[i]);
        }
        return v;
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends