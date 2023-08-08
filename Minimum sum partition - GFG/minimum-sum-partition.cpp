//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
  bool solve(int n,int k,int *arr,vector<vector<int>> &dp)
{
	if(k==0)return true;
	if(n==0)return(arr[0]==k);
	if(dp[n][k]!=-1)return dp[n][k];
	bool notpick=solve(n-1,k,arr,dp);
	bool pick=false;
	if(arr[n]<=k)
		pick=solve(n-1,k-arr[n],arr,dp);
	return dp[n][k]=pick||notpick;
}
	int minDifference(int arr[], int n)  { 
	    int mini=INT_MAX;
	int k=0;
	if(n==1)return arr[0];
	for(int i=0;i<n;i++)k+=arr[i];
	vector<vector<int>> dp(n,vector<int>(k+1,-1));
	for(int i=0;i<=k;i++)
	{
		solve(n-1,i,arr,dp);
	}
	for(int i=0;i<=k;i++)
	{
		if(dp[n-1][i])
		{
			int s1=i;
			int s2=k-i;
			mini=min(mini,abs(s1-s2));
		}
	}
	return mini;
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends