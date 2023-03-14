//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 100


// Returns sum of perimeter of shapes formed with 1s
int findPerimeter(int mat[MAX][MAX], int n,int m);

int main() {
	int t;
	cin>>t;
	int g[MAX][MAX];
	while(t--)
	{
		memset(g,0,sizeof g);
		int n;
		cin>>n;
		int m;
		cin>>m;
	
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>g[i][j];
			}
		}
		
		cout<<findPerimeter(g,n,m)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/*You are required to complete this method */
void bfs(vector<vector<int>> &grid,int row,int col,int &ans,vector<vector<int>> &vis)
    {
        vis[row][col]=1;
        queue <pair<int,int>> q;
        q.push({row,col});
        int n=grid.size();
        int m=grid[0].size();
        //cout<<n<<" "<<m;
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
int findPerimeter(int mat[MAX][MAX], int n, int m)
{
    vector<vector<int>> grid(n,vector<int>(m));
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                grid[i][j]=mat[i][j];
            }
        }
    vector<vector<int>> vis(n,vector<int>(m,0));
    int ans=0;
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1 && !vis[i][j])
                {
                    bfs(grid,i,j,ans,vis);
                }
                
            }
        }
    return ans;
}