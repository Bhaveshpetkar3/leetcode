class Solution {
public:
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
        vis[0]=1;
        queue<int> q;
        q.push(0);
        while(!q.empty())
        {
            int h=q.size();
            for(int i=0;i<h;i++)
            {
                int node=q.front();
                q.pop();
                for(auto l:adj[node])
                {
                    if(!vis[l.first]){
                        if(l.second==1)ans++;
                        q.push(l.first);
                        vis[l.first]=1;
                    }
                }   
            }
        }
        return ans;
    }
};