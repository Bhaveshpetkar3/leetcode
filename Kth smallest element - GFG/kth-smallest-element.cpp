//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int nums[], int l, int r, int k) {
        priority_queue<long long> pq;
        //priority_queue<long long, vector<long long>,greater<long long>> pq2;
		//vector<int> ans;
		
		int ans;
        for(int i=l;i<k;i++) pq.push(nums[i]);
		//for(int i=0;i<k;i++) pq2.push(nums[i]);
        for(int i=k;i<=r;i++) {
            if(pq.top()>nums[i]) {
                pq.pop();
                pq.push(nums[i]);
            }
        }
//         ans.push_back(pq.top());
// 		ans.push_back(pq2.top());
		ans=pq.top();
		//Return the top (smallest) of min-heap
        return ans;
}
        
    
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends