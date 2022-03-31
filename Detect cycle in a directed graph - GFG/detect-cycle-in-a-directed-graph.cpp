// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
   bool aman(vector<int>adj[],vector<int>&vis,int s)
   {
       if(vis[s]==1)
       {
           return true;
       }
       if(vis[s]==2)
       {
           return false;
       }
       vis[s]=1;
       for(auto x:adj[s])
       {
           if(aman(adj,vis,x))
           {
               return true;
           }
       }
       vis[s]=2;
       return false;
   }
    bool isCyclic(int v, vector<int> adj[]) {
       vector<int>vis(v,0);
       for(int i=0;i<v;i++)
       {
           if(vis[i]==0&&aman(adj,vis,i))
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