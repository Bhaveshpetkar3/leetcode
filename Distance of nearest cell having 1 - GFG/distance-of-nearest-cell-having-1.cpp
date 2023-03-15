//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
    // void bfs(vector<vector<int>> grid,vector<vector<int>> vis,int row,int col,vector<vector<int>> &ans)
    // {
    //     int n=grid.size();
    //     int m=grid[0].size();
    //     queue<pair<int,int>> q;
    //     q.push({row,col});
    //     int dx[]={-1,0,1,0};
    //     int dy[]={0,-1,0,1};
    //     while(!q.empty())
    //     {
    //         int r=q.front().first;
    //         int c=q.front().second;
    //         q.pop();
    //     for(int i=0;i<4;i++)
    //     {
    //             int nrow=dx[i]+r;
    //             int ncol=dy[i]+c;
    //             if(nrow<n && nrow>=0 && ncol<m && ncol>=0 && !vis[nrow][ncol])
    //             {
    //                 vis[nrow][ncol]=1;
    //                 if(grid[nrow][ncol]==1)
    //                 {
    //                 ans[row][col]=abs(row-nrow)+abs(col-ncol);
    //                 return;
    //                 }
    //                 else q.push({nrow,ncol});
    //             }
    //     }   
        
    //     }
    // }
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int n=grid.size();
	    int m=grid[0].size();
	    vector<vector<int>> vis(n,vector<int>(m,0));
	    vector<vector<int>> ans(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
	    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
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

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends