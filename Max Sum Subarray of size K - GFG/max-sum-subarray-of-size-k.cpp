//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        long long int j=n-k+1;
        long long int i,sum=0,ans=INT_MIN;
        for (i=0;i<k;i++)
        {
            sum+=arr[i];
        }
        ans=max(ans,sum);
        for(int h=i;h<n;h++)
        {
            sum-=arr[h-k];
            sum+=arr[h];
            ans=max(sum,ans);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends