//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
int solve(vector<int> &arr,vector<vector<int>> &dp,int n,int sum)
	{
	    if(n==0)
			{
				if(sum==0 and arr[0]==0)return 2;
				if(sum==0)return 1;
				if(sum==arr[0])return 1;
				return 0;
			}
		if(dp[n][sum]!=-1)return dp[n][sum];
	    int nottaken=solve(arr,dp,n-1,sum);
		int taken=0;
	    if(arr[n]<=sum)taken=solve(arr,dp,n-1,sum-arr[n]);
	    dp[n][sum]=(taken+nottaken)%1000000007;
	}
    int countPartitions(int n, int d, vector<int>& arr) {
        int k=0;
    for(auto i:arr)k+=i;
    int sum=k-d;
    if(sum<0 or sum%2)return 0;
    sum/=2;
    vector<vector<int>> dp(n,vector<int>(sum+1,-1));
    return solve(arr,dp,n-1,sum);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends