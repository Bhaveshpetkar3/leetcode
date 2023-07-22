//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   int solve(int m,int n,int r,int c,vector<vector<int>> &dp,vector<vector<int>> &grid)
    {
        if(r<0 or c<0)
            return 0;
        if(dp[r][c]!=-1)return dp[r][c];
        if(grid[r][c]==1)return 0;
        return dp[r][c]=(solve(m,n,r-1,c,dp,grid)+solve(m,n,r,c-1,dp,grid))%1000000007;
    }
    int totalWays(int m, int n, vector<vector<int>>& grid) {
       
        if(grid[0][0]==1)return 0;
        vector<vector<int>> dp(m,vector<int>(n,-1));
        dp[0][0]=1;
        return solve(m,n,m-1,n-1,dp,grid);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int i = 0; i < m; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.totalWays(n, m, grid) << "\n";
    }
    return 0;
}
// } Driver Code Ends