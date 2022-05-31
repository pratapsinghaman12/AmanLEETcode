// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to find length of longest bitonic
	// subarray
	int bitonic(vector<int> A, int n) {
    int  max_len = 1, i = 0;
    int start=0;
    int new_start=0;
    if (n==0)
    {
        return 0;
    }
    while (i < n-1)
    {

 
        while (i  < n-1 && A[i] <=A[i + 1]) {
            i++;
        }
 
        
        while (i < n-1 && A[i] >= A[i + 1]) {
            
           if(A[i]>A[i+1])
           {
               new_start=i+1;
           }
            
             i++;
        }
        if (i-start+1> max_len)
        {
            max_len = i-start+1;
        }
        start=new_start;
    }
    return max_len;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.bitonic(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends