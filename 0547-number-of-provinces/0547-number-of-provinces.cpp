class Solution {
public:
    void dfs(vector <int> adj[],int node,vector <int> &vis)
    {
        vis[node]=1;
        for(auto i:adj[node] )
        {
            if(!vis[i])dfs(adj,i,vis);
        }
    }
    int findCircleNum(vector<vector<int>>& aj) {
        int V=aj.size();
        vector <int> adj[V];
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(aj[i][j]==1 && i!=j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector <int> vis(V,0);
        int ans=0;
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                ans++;
                dfs(adj,i,vis);
            }
        }
        return ans;
    }
};