class Solution {
public:
    bool is_cycle(vector<vector<int>>&adj,vector<int>&vis,int src)
    {
        if(vis[src]==1)
        {
            return true;
        }
        if(vis[src]==2)
        {
            return false;
        }
        vis[src]=1;
        for(int i=0;i<adj[src].size();i++)
        {
            if(is_cycle(adj,vis,adj[src][i]))
            {
                return true;
            }
        }
        vis[src]=2;
        return false;
    }
    bool canFinish(int num, vector<vector<int>>& pre) {
        vector<vector<int>>adj(num);
        for(int i=0;i<pre.size();i++)
        {
             adj[pre[i][0]].push_back(pre[i][1]);
        }
        vector<int> visited(num,0);
        for(int i=0;i<num;++i)
        {
            if(visited[i]==0&&is_cycle(adj,visited,i))
            {
                 return false;
            }           
        }   
        return true;
    }
};