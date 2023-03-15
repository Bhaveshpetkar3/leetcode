//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
void bfs(vector<vector<int>> &vis,vector<vector<char>> grid,int row,int col)
    {
        int n=grid.size();
        int m=grid[0].size();
        vis[row][col]=1;
        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};
        queue<pair<int,int>> q;
        q.push({row,col});
        for(int i=0;i<4;i++)
        {
            int nrow=row+dx[i];
            int ncol=col+dy[i];
            if(nrow<n && nrow>=0 && ncol<m && ncol>=0 && !vis[nrow][ncol] && grid[nrow][ncol]=='O')
            {
                bfs(vis,grid,nrow,ncol);
            }
        }
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> grid)
    {
        // int n=grid.size();
        // int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<m;i++)
        {
            //vis[0][i]=1;
            if(!vis[0][i] && grid[0][i]=='O')bfs(vis,grid,0,i);
            //vis[m-1][i]=1;
            if(!vis[n-1][i] && grid[n-1][i]=='O')bfs(vis,grid,n-1,i);
        }
        for(int i=0;i<n;i++)
        {
            //vis[i][0]=1;
            if(!vis[i][0] && grid[i][0]=='O'  )bfs(vis,grid,i,0);
            //vis[i][n-1]=1;
            if(!vis[i][m-1] && grid[i][m-1]=='O')bfs(vis,grid,i,m-1);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='O' && !vis[i][j])grid[i][j]='X';          
            }
        }
        return grid;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends