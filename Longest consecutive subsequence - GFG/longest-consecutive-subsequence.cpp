//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      sort(arr,arr+n);
      int a=arr[0];
      int ans1=INT_MIN;
      vector <int> ans;
      ans.push_back(arr[0]);
      for(int i=1;i<n;i++)
      {
          if(arr[i]!=arr[i-1])ans.push_back(arr[i]);
      }
    int cnt=1;
    for(int i=0;i<ans.size();i++)
    {
        if(i > 0 && ans[i]==ans[i-1]+1)
        {
            cnt++;
            
        }
        else cnt=1;
        ans1=max(ans1,cnt);
    }
    return ans1;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends