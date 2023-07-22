//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int solve(int r,int c,vector<vector<int>> &dp,vector<vector<int>> &grid)
    {
        if(r<0 or c<0 or c>=grid[r].size())return 999999;
        if(r==0 and c==0)return grid[0][0];
        if(dp[r][c]!=-1)return dp[r][c];
        return dp[r][c]=min(solve(r-1,c,dp,grid),solve(r-1,c-1,dp,grid))+grid[r][c];
    }
    int minimizeSum(int n, vector<vector<int>>& grid) {
        int m=grid.size();
        vector<vector<int>> dp(m,vector<int>(m,-1));
        int mini=INT_MAX;
        for(int i=0;i<m;i++)
        {
            mini=min(solve(m-1,i,dp,grid),mini);
        }
        return mini;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> triangle;

        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j <= i; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            triangle.push_back(temp);
        }
        Solution obj;
        cout << obj.minimizeSum(n, triangle) << "\n";
    }
    return 0;
}
// } Driver Code Ends