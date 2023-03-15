class Solution {
public:
    void bfs(vector<vector<int>> &vis,int row,int col,vector<vector<char>>& grid)
    {
        vis[row][col]=1;
        queue<pair<int,int>> q;
        q.push({row,col});
        int n=grid.size();
        int m=grid[0].size();
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            int dx[]={-1,0,1,0};
            int dy[]={0,-1,0,1};
            for(int i=0;i<4;i++)
            {
                    int nrow=row+dx[i];
                    int ncol=col+dy[i];
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol])
                    {
                        q.push({nrow,ncol});
                        vis[nrow][ncol]=1;
                    }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j]=='1')
                {
                    ans++;
                    bfs(vis,i,j,grid);
                }
            }
        }
        return ans;
    }
};