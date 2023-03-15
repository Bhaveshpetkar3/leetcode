class Solution {
public:
    void bfs(vector<vector<int>> &vis,int row,int col,vector<vector<int>> &image,int color)
    {
        vis[row][col]=1;
        int ogcol=image[row][col];
        image[row][col]=color;
        queue<pair<int,int>> q;
        q.push({row,col});
        int n=image.size();
        int m=image[0].size();
        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                    //if((delrow==-1 || delrow==1) && delcol!=0)continue;
                    int nrow=row+dx[i];
                    int ncol=col+dy[i];
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && image[nrow][ncol]==ogcol)
                    {
                        image[nrow][ncol]=color;
                        q.push({nrow,ncol});
                        vis[nrow][ncol]=1;
                    }
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        bfs(vis,sr,sc,image,color);
        return image;
    }
};