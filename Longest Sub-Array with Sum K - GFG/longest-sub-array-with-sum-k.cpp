//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        unordered_map <int,vector<int>> mp;
        mp[0].push_back(-1);
        int ans=0;
        long long sum=0;
        int i=0;
        while(i<n)
        {
            sum+=arr[i];
            int j=0;
            while(mp[sum-k].size() and j<mp[sum-k].size())
            {
                ans=max(ans,i-mp[sum-k][j]);
                j++;
            }
            mp[sum].push_back(i);
            i++;
        }
        return ans;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends