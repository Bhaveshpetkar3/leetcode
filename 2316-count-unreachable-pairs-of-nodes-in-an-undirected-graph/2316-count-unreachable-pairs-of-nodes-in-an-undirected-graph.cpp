class Solution {
public:
    void dfs(int node,vector<int> &vis,vector<int> adj[],long long &ctr)
    {
        ctr++;
        vis[node]=1;
        for(auto i:adj[node])
        {
            if(!vis[i])
                dfs(i,vis,adj,ctr);
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int> ans;
        long long ctr=0,totalnode=n,answ=0;
        vector <int> adj[n];
        vector<int> vis(n,0);
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,adj,ctr);
                ans.push_back(ctr);
                ctr=0;
            }
        }
        for(int i=0;i<ans.size()-1;i++)
        {
            totalnode-=ans[i];
            answ+=ans[i]*totalnode;
        }
        // for(int i=0;i<7;i++)
        // {
        //     for(auto j:adj[i])
        //     {
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }
        return answ;
    }
};