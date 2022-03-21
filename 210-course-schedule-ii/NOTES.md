{
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
void solve(vector<vector<int>>&adj,vector<bool>&vis,stack<int>&st,int src)
{
vis[src]=true;
for(int i=0;i<adj[src].size();i++)
{
if(vis[adj[src][i]]==false)
{
solve(adj,vis,st,adj[src][i]);
}
}
st.push(src);
}
vector<int> findOrder(int n, vector<vector<int>>& pre) {
vector<vector<int>>adj(n);
vector<int>v;
for(int i=0;i<n;i++)
{
adj[pre[i][1]].push_back(pre[i][0]);
}
if(dfs(adj,n)==true)
{
return v;
}
vector<bool>vis(n,false);
stack<int>st;
for(int i=0;i<n;i++)
{
if(vis[i]==false)
{
solve(adj,vis,st,i);
}
}
while(!st.empty())
{
v.push_back(st.top());
st.pop();
}
return v;
}
};