class Solution {
public:
    void dfs(vector<int> adj[],vector<int> &vis,int node)
        {
            vis[node]=1;
            for(auto i:adj[node])
            {
                if(!vis[i])
                    dfs(adj,vis,i);
            }
        }
    int makeConnected(int n, vector<vector<int>>& c) {
        int cnt=0;
        int m = c.size();
        if(m<n-1)return -1;
        vector<int> vis(n,0);
        vector<int> adj[n];
        //adj[0].push_back(1);
        for(auto i:c)
        {
            adj[i[1]].push_back(i[0]);
            adj[i[0]].push_back(i[1]);
        }
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                cnt++;
                dfs(adj,vis,i);
            }
        }
        return cnt-1;
    }
};