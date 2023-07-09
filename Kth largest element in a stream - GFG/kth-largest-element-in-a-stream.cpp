//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> kthLargest(int k, int arr[], int n) {
        priority_queue<int,vector<int>,greater<int>> pq;
        vector<int> ans;
        int i;
        for(i=0;i<k;i++)pq.push(arr[i]);
        for(int j=0;j<k-1;j++)ans.push_back(-1);
        ans.push_back(pq.top());
        while(i<n)
        {
            if(arr[i]>pq.top())
                {
                    pq.pop();
                    pq.push(arr[i]);
                }
            ans.push_back(pq.top());
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k,n;
        cin>>k>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> v = ob.kthLargest(k,arr,n);
        for(int i : v)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends