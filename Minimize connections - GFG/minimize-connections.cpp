//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
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
        int minimumConnections(vector<vector<int>> &c,int n)
        {
            int cnt=0;
        int m = c.size();
        if(m<n-1)return -1;
        vector<int> vis(n,0);
        vector<int> adj[n];
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

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m;
        cin>>m;
        vector<vector<int>> c(m,vector<int> (2));
        for(auto &j:c)
            cin>>j[0]>>j[1];
        Solution s;
        cout<<s.minimumConnections(c,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends