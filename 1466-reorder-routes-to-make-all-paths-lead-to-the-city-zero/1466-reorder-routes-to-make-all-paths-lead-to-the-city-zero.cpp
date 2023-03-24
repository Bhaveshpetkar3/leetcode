class Solution {
public:
    void dfs(vector<pair<int,bool>> adj[],vector<int> &vis,int &ans,int node,int parent)
    {
        vis[node]=1;
        // if(abc[parent])
        // {
        //     //cout<<node<<" ";
        //     abc[node]=1;
        //     ans++;
        // }
        for(auto i:adj[node])
        {
            if(!vis[i.first])
            {
                if(i.second==1)ans++;
                dfs(adj,vis,ans,i.first,node);
                    //abc[node]=1;
            }
            
        }
        //return 0;
    }
    int minReorder(int n, vector<vector<int>>& c) {
        int m=c.size();
        vector<pair<int,bool>> adj[n];
        //vector<bool> abc(n+1,0);
        for(auto i : c)
        {
            //if(i[1]==0)abc[i[0]]=1;
            adj[i[0]].push_back({i[1],1});
            adj[i[1]].push_back({i[0],0});
        }
        //for(auto i:abc)cout<<i<<" ";
        //vector<bool> abc(n+1,0);
        vector<int> vis(n,0);
        int ans=0;
        //abc[0]=1;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(adj,vis,ans,i,n);
            }
        }
        //cout<<abc[n];
        //cout<<abc[4];
        // for(int i=0;i<n;i++)
        // {
        //     if(abc[i])
        //     {
        //         for(auto j:adj[i])
        //         {
        //             if(!abc[j])
        //             {
        //                 abc[j]=1;
        //                 ans++;
        //             }
        //         }
        //     }
        // }
        //for(auto i:adj[4])cout<<i<<" ";
        return ans;
    }
};