//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool solve(int n,int k,vector<int> &arr,vector<vector<int>> &dp)
{
    if(k==0)return true;
    if(n==0)return k==arr[0];
    if(dp[n][k]!=-1)return dp[n][k];
    bool taken=false;
    if(arr[n]<=k)
        taken=solve(n-1,k-arr[n],arr,dp);
    bool nottaken=solve(n-1,k,arr,dp);
    return dp[n][k]=taken||nottaken;
}
    bool isSubsetSum(vector<int>arr, int k){
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(k+1,-1));
        return solve(n-1,k,arr,dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends