class Solution {
public:
    bool kans_algo(vector<vector<int>>&adj,vector<int>&indegree,vector<int>&ans,int n)
    {
        queue<int>q;
        int count=0;
        for(int i=0;i<indegree.size();i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        while(q.size()!=0)
        {
            int curr= q.front();
            q.pop();
            for(auto x:adj[curr])
            {
                indegree[x]-=1;
                if(indegree[x]==0)
                {
                    q.push(x);
                }
            }
            ans.push_back(curr);
            count+=1;
        }
        if(count==n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<vector<int>>adj(n);
        vector<int>indegree(n,0);
        for(int i=0;i<pre.size();i++)
        {
            adj[pre[i][1]].push_back(pre[i][0]);
            indegree[pre[i][0]]+=1;
        }
        vector<int>ans;
        if(kans_algo(adj,indegree,ans,n))
        {
            return ans;
        }
        vector<int>res;
        return res;
        
    }
};