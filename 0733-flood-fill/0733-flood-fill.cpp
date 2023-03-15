class Solution {
public:
    void dfs(vector<vector<int>> &vis,int row,int col,vector<vector<int>> &image,int color,int ogcolor)
    {
        int n=image.size();
        int m=image[0].size();
        vis[row][col]=1;
        if(image[row][col]==ogcolor)image[row][col]=color;
        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};
        for(int i=0;i<4;i++)
        {
            int nrow=row+dx[i];
            int ncol=col+dy[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && image[nrow][ncol]==ogcolor)
                    dfs(vis,nrow,ncol,image,color,ogcolor);
        }
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int ogcolor=image[sr][sc];
        dfs(vis,sr,sc,image,color,ogcolor);
        return image;
    }
};