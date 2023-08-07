//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
bool solve(int n,int k,int *arr,vector<vector<int>> &dp)
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
    int equalPartition(int n, int arr[])
    {
        int k=0;
	for(int i=0;i<n;i++)k+=arr[i];
	if(k%2)return false;
	k/=2;
	vector<vector<int>> dp(n,vector<int>(k+1,-1));
	return solve(n-1,k,arr,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends