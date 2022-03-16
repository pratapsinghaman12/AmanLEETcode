// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
   vector<int>ans;
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
       vector<bool>vis(V,false);
       queue<int>q;
       vis[0]=true;
       q.push(0);
       while(q.empty()==false)
       {
           int curr= q.front();
           q.pop();
           ans.push_back(curr);
           for(int i=0;i<adj[curr].size();i++)
           {
               if(vis[adj[curr][i]]==false)
               {
                   q.push(adj[curr][i]);
                   vis[adj[curr][i]]=true;
                   
                   
               }
           }
       }
       return ans;
      
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends