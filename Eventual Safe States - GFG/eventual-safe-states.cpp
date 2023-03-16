//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  bool dfs(int node,vector<int> adj[],int vis[],int path[],vector<int> &cycle)
    {
        path[node]=1;
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                if(dfs(it,adj,vis,path,cycle)==true)return true;
            }
            else if(path[it])
            {
                for(int i=0;i<cycle.size();i++)if(path[i]==1)cycle[i]=1;
                return true;
            }
            //return false;
        }
        path[node]=0;
        return false;
    }
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        int vis[V]={0};
        int path[V]={0};
        vector<int > cycle(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfs(i,adj,vis,path,cycle);
            }
        }
        vector<int> ans;
        for(int i=0;i<V;i++)
        {
            if(cycle[i]==0)ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
//cycle wale elements sodun baki all ans :)

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends