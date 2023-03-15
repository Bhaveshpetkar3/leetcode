class Solution {
public:
    void bfs(vector<vector<int>> &vis,vector<vector<int>> &grid,int row,int col)
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
            if(nrow<n && nrow>=0 && ncol<m && ncol>=0 && !vis[nrow][ncol] && grid[nrow][ncol]==1)
            {
                bfs(vis,grid,nrow,ncol);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<m;i++)
        {
            //vis[0][i]=1;
            if(!vis[0][i] && grid[0][i]==1)bfs(vis,grid,0,i);
            //vis[m-1][i]=1;
            if(!vis[n-1][i] && grid[n-1][i]==1)bfs(vis,grid,n-1,i);
        }
        for(int i=0;i<n;i++)
        {
            //vis[i][0]=1;
            if(!vis[i][0] && grid[i][0]==1)bfs(vis,grid,i,0);
            //vis[i][n-1]=1;
            if(!vis[i][m-1] && grid[i][m-1]==1)bfs(vis,grid,i,m-1);
        }
        int ans=0;
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(grid[i][j]==1 && !vis[i][j])ans++;          
            }
        }
        return ans;
    }
};