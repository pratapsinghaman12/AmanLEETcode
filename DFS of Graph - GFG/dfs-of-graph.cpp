// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  vector<int>ans;
   vector<int> dfs(int s,vector<int>adj[],vector<bool>&vis)
   {
       vis[s]=true;
       ans.push_back(s);
       for(auto x:adj[s])
       {
           if(vis[x]==false)
           {
               dfs(x,adj,vis);
           }
       }
       return ans;
   }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
      vector<bool>vis(V,false);
      return dfs(0,adj,vis);
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends