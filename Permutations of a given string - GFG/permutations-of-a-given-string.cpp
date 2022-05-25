// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	vector<string>ans;
	set<string>st;
	void aman(string s,int i)
	{
	    if(i==s.length()-1)
	    {
	       st.insert(s);
	        return;
	    }
	    for(int j=i;j<s.length();j++)
	    {
	        swap(s[i],s[j]);
	        aman(s,i+1);
	        swap(s[i],s[j]);
	    }
	}
		vector<string>find_permutation(string s)
		{
		    aman(s,0);
		   copy(st.begin(),st.end(),back_inserter(ans));
		    return ans;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends