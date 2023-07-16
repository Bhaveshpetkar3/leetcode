//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int solve(vector<int> &dp,int *nums,int n)
    {
        if(n<0)return 0;
        if(dp[n]!=-1)return dp[n];
        int left=INT_MIN,right=INT_MIN;
        if(n-2>=0)
            left=nums[n]+solve(dp,nums,n-2);
        if(n-3>=0)
            right=nums[n]+solve(dp,nums,n-3);
        return dp[n]=max(left,right);
    }
    int FindMaxSum(int nums[], int n)
    {
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        vector<int> dp(n,-1);
        dp[0]=nums[0];
        dp[1]=nums[1];
        return max(solve(dp,nums,n-1),solve(dp,nums,n-2));
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends