class Solution {
public:
    bool solve(int n,int k,vector<int> &arr,vector<vector<int>> &dp)
{
	if(k==0)return true;
	if(n==0)return arr[0]==k;
	if(dp[n][k]!=-1)return dp[n][k];
	bool notpick=solve(n-1,k,arr,dp);
	bool pick=false;
	if(arr[n]<=k)
		pick=solve(n-1,k-arr[n],arr,dp);
	return dp[n][k]=pick||notpick;
}
    bool canPartition(vector<int>& arr) {
        int n=arr.size();
        int k=0;
	for(auto i:arr)k+=i;
	if(k%2)return false;
	k/=2;
	vector<vector<int>> dp(n,vector<int>(k+1,-1));
	return solve(n-1,k,arr,dp);
    }
};