class Solution {
public:
    bool iscycle(vector<vector<int>>&adj,vector<bool>&vis,vector<bool>&rec,int st)
    {
        vis[st]=true;
        rec[st]=true;
        for(auto x:adj[st])
        {
            if(vis[x]==false&&iscycle(adj,vis,rec,x))
            {
                return true;
            }
            else if(rec[x]==true)
            {
                return true;
            }
        }
        rec[st]=false;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>>adj(n);
        for(int i=0;i<pre.size();i++)
        {
            adj[pre[i][0]].push_back(pre[i][1]);
        }
        vector<bool>vis(n,false);
        vector<bool>rec(n,false);
        for(int i=0;i<adj.size();i++)
        {
            if(vis[i]==false&&iscycle(adj,vis,rec,i))
            {
                return false;
            }
        }
        return true;
    }
};