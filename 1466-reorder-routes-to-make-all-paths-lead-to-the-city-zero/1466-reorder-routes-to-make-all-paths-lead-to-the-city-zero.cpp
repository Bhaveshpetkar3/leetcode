class Solution {
public:
    void dfs(vector<pair<int,bool>> adj[],vector<int> &vis,int &ans,int node)
    {
        vis[node]=1;
        for(auto i:adj[node])
        {
            if(!vis[i.first])
            {
                if(i.second==1)ans++;
                dfs(adj,vis,ans,i.first);
            }
            
        }
    }
    int minReorder(int n, vector<vector<int>>& c) {
        int m=c.size();
        vector<pair<int,bool>> adj[n];
        for(auto i : c)
        {
            adj[i[0]].push_back({i[1],1});
            adj[i[1]].push_back({i[0],0});
        }
        vector<int> vis(n,0);
        int ans=0;
        dfs(adj,vis,ans,0);
        return ans;
    }
};