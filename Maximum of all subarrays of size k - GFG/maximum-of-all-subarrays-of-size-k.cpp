//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> ans;
        priority_queue<pair<int,int>> pq;
        int i=0,j=0;
        for(int j=0;j<n;j++)
        {
            pq.push({arr[j],j});
            if(j-i+1==k)
            {
                // ans.push_back(pq.top().first);
                // vector<pair<int,int>> temp;
                // while(!pq.empty() and pq.top().second!=i)
                // {
                //     temp.push_back(pq.top());
                //     pq.pop();
                // }
                // pq.pop();
                // int l=0;
                // while(l<temp.size())
                // {
                //     pq.push(temp[l++]);
                // }
                while(pq.top().second<i)pq.pop();
                ans.push_back(pq.top().first);
                i++;
            }   
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends