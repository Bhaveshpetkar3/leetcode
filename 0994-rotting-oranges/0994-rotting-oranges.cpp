class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cntfresh=0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)cntfresh++;
                else if(grid[i][j]==2)
                {
                    vis[i][j]=2;
                    q.push({{i,j},0});
                }
            }
        }
        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};
        int cnt=0;
        int tm=0;
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            tm=t;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nrow=r+dx[i];
                int ncol=c+dy[i];
                if(nrow<n && nrow>=0 && ncol<m && ncol>=0 && !vis[nrow][ncol] && grid[nrow][ncol]==1)
                {
                    vis[nrow][ncol]=2;
                    cnt++;
                    q.push({{nrow,ncol},t+1});
                }
            }
        }
        if(cntfresh!=cnt)return -1;
        return tm;
    }
};