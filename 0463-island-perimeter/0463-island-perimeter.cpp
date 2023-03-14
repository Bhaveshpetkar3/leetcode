class Solution {
public:
    void bfs(vector<vector<int>> &grid,int row,int col,int &ans,vector<vector<int>> &vis)
    {
        vis[row][col]=1;
        //cout<<row<<col;
        queue <pair<int,int>> q;
        q.push({row,col});
        int n=grid.size();
        int m=grid[0].size();
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int delrow=-1;delrow<=1;delrow++)
            {
                for(int delcol=-1;delcol<=1;delcol++)
                {
                    if((delrow==-1 || delrow==1) && delcol!=0)continue;
                    int nrow=row+delrow;
                    int ncol=col+delcol;
                        if(nrow<0 || nrow>=n || ncol<0 || ncol>=m)ans++;
                        else if(grid[nrow][ncol]==0)ans++;
                        else if(!vis[nrow][ncol])
                        {
                            vis[nrow][ncol]=1;
                            q.push({nrow,ncol});
                        }
                    
                }
            }
        }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    bfs(grid,i,j,ans,vis);
                    return ans;
                }
                
            }
        }
        return ans;
    }
};