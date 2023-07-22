//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int solve(int m,int n,int r,int c,vector<vector<int>> &dp,vector<vector<int>> &grid)
    {
        if(r<0 or c<0)
            return 0;
        if(dp[r][c]!=-1)return dp[r][c];
        if(grid[r][c]==0)return 0;
        return dp[r][c]=(solve(m,n,r-1,c,dp,grid)+solve(m,n,r,c-1,dp,grid))%1000000007;
    }
    int uniquePaths(int m, int n, vector<vector<int>> &grid) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        if(grid[0][0]==0)return 0;
        dp[0][0]=1;
        return solve(m,n,m-1,n-1,dp,grid);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends