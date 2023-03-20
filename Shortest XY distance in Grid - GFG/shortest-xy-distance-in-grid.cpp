//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestXYDist(vector<vector<char>> grid, int n, int m) {
        vector<vector<int>> vis(n,vector<int>(m,0));
        queue <pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='X')
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
             int t=q.front().second;
             q.pop();
             for(int i=0;i<4;i++)
            {
                int nrow=r+dx[i];
                int ncol=c+dy[i];
                if(nrow<n && nrow>=0 && ncol<m && ncol>=0 && !vis[nrow][ncol] && (grid[nrow][ncol]=='O' || grid[nrow][ncol]=='Y'))
                {
                    if(grid[nrow][ncol]=='Y')return t+1;
                    vis[nrow][ncol]=1;
                    //cnt++;
                    q.push({{nrow,ncol},t+1});
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        char ch;
        cin >> N >> M;

        vector<vector<char>> grid;

        for (int i = 0; i < N; i++) {
            vector<char> col;
            for (int i = 0; i < M; i++) {
                cin >> ch;
                col.push_back(ch);
            }
            grid.push_back(col);
        }

        Solution ob;
        cout << ob.shortestXYDist(grid, N, M) << endl;
    }
    return 0;
}
// } Driver Code Ends