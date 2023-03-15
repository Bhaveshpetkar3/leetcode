class Solution {
public:
    bool bfs(int i,int V,vector<int> adj[],vector <int> &vis)
    {
        queue<int> q;
        q.push(i);
        vis[i]=0;
        while(!q.empty())
        {
            int node=q.front();
            //int parent=q.front().second;
            q.pop();
            for(auto it:adj[node])
            {
                if(vis[it]==-1)
                {
                    
                    vis[it]=!vis[node];
                    q.push(it);
                }
                else 
                {
                    if(vis[it]==vis[node])return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& grid) {
        int n=grid.size();
        int V=n;
        vector<int> adj[n];
       for(int i = 0; i < n; i++) {
		for(int j = 0; j < grid[i].size(); j++) {
				adj[i].push_back(grid[i][j]);
			}
		}
        vector<int> vis(V,-1);
	    for(int i=0;i<V;i++)
	    {
	        if(vis[i]==-1)
	        {
	            if(bfs(i,V,adj,vis)==false)return false;
	        }
	    }
	    return true;
        
    }
};