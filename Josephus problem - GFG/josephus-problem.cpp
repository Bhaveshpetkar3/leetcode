//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    int solve(vector<int> arr,int k,int s)
    {
        if(arr.size()==1)return arr[0];
        int idx=(s+k-1)%arr.size();
        arr.erase(arr.begin()+idx);
        return solve(arr,k,idx);
    }
    public:
    int josephus(int n, int k)
    {
       vector<int> arr(n);
       for(int i=0;i<n;i++)arr[i]=i+1;
       return solve(arr,k,0);
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends