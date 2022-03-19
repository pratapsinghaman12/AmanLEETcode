class Solution {
public:
    bool isBP(vector<vector<int>>&adj,vector<int>&color,int st)
    {
        queue<int>q;
        q.push(st);
        color[st]=1;
        while(q.empty()==false)
        {
            int curr=q.front();
            q.pop();
            for(int x:adj[curr])
            {
                if(color[x]==color[curr])
                {
                    return false;
                }
                else if(color[x]==-1)
                {
                    color[x]=1-color[curr];
                    q.push(x);
                }
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>>adj(n+1);
        for(int i=0;i<dislikes.size();i++)
        {
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        vector<int>color(n+1,-1);
        for(int i=1;i<=n;i++)
        {
            if(color[i]==-1)
            {
                if(isBP(adj,color,i)==false)
                {
                    return false;
                }
            }
        }
        return true;
    }
};