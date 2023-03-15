class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
	    int m=grid[0].size();
	    vector<vector<int>> vis(n,vector<int>(m,0));
	    vector<vector<int>> ans(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
	    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                {
                    vis[i][j]=1;
                    q.push({{i,j},0});
                }
            }
        }
        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int step=q.front().second;
            ans[r][c]=step;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nrow=r+dx[i];
                int ncol=c+dy[i];
                if(nrow<n && nrow>=0 && ncol<m && ncol>=0 && !vis[nrow][ncol])
                {
                    vis[nrow][ncol]=1;
                    
                    q.push({{nrow,ncol},step+1});
                }
            }
        }
        return ans;
    }
};