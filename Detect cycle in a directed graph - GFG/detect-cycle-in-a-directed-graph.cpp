// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool aman(int s,vector<bool>&vis,vector<bool>&recs,vector<int>adj[])
    {
        vis[s]=true;
        recs[s]=true;
        for(auto x:adj[s])
        {
            if(vis[x]==false&&aman(x,vis,recs,adj))
            {
                return true;
            }
            else if(recs[x]==true)
            {
                return true;
            }
        }
        recs[s]=false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool>vis(V,false);
           vector<bool>recs(V,false);
       for(int i=0;i<V;i++)
       {
           if(vis[i]==false&&aman(i,vis,recs,adj))
           {
               return true;
           }
       }
       return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends