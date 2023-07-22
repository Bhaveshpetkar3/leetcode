//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int solve(int r,int c,vector<vector<int>> &dp,vector<vector<int>> &grid)
{
    if(r<0 or c<0 or c>=grid[r].size())return INT_MIN;
    if(dp[r][c]!=-1)return dp[r][c];
    if(r==0)return grid[r][c];
    return dp[r][c]=max(solve(r-1,c,dp,grid),max(solve(r-1,c-1,dp,grid),solve(r-1,c+1,dp,grid)))+grid[r][c];
}
    int maximumPath(int m, vector<vector<int>> grid)
    {
        int n=m;
        vector<vector<int>> dp(m,vector<int>(n,-1));
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,solve(m-1,i,dp,grid));
    }
    return maxi;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends