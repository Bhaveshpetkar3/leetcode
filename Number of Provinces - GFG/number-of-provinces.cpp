//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    private:
    void dfs(vector <int> adj[],int node,vector <int> &vis)
    {
        vis[node]=1;
        for(auto i:adj[node] )
        {
            if(!vis[i])dfs(adj,i,vis);
        }
    }
  public:
    int numProvinces(vector<vector<int>> aj, int V) {
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

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends