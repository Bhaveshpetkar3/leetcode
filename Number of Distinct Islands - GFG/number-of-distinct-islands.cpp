//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void bfs(vector<vector<int>> &vis,vector<vector<int>> &grid,int row,int col,vector<pair<int,int>> &vec)
    {
        int n=grid.size();
        int m=grid[0].size();
        //long long g=5;
        //s+=to_string(row)+to_string(col);
        queue<pair<int,int>> q;
        q.push({row,col});
        vis[row][col]=1;
        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nrow=dx[i]+r;
                int ncol=dy[i]+c;
                if(nrow<n && nrow>=0 && ncol<m && ncol>=0 && !vis[nrow][ncol] && grid[nrow][ncol]==1)
                {
                    vis[nrow][ncol]=1;
                    //s+=to_string(abs(nrow-row))+to_string(abs(ncol-col))+"x";
                    vec.push_back({nrow-row,ncol-col});
                    q.push({nrow,ncol});
                }
            }
        }
        
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        set<vector<pair<int,int>>> a;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j]==1)
                {
                    vector<pair<int,int>> vec;
                    //string s="";
                    bfs(vis,grid,i,j,vec);
                    a.insert(vec);
                }
            }
        }
        int ans=a.size();
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends