// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int ceilIndex(int arr[],int l,int h,int x)
{
	while(l<h)
	{
		int mid= l+ (h-l)/2;
		if(arr[mid]>=x)
		{
			h=mid;
		}
		else
		{
			l=mid+1;
		}
	}
	return h;
}
    int longestSubsequence(int n, int v[])
    {
        int lis[n]={0};
        int len=1;
  lis[0]=v[0];
  for(int i=1;i<n;i++)
  {
      if(v[i]>lis[len-1])
	  {
		  lis[len]=v[i];
		  len++;
	  }
	  else
	  {
		  int c=ceilIndex(lis,0,len-1,v[i]);
		  lis[c]=v[i];
	  }
  }
  return len;
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends