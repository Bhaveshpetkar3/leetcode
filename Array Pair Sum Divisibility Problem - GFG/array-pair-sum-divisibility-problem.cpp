//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        map<long long,long long> mp;
        int ctr=0;
        for(auto i:nums)
        {
          long long h=i%k;
          //mp[h]++;
          if(h==0 && mp.find(h)!=mp.end() && mp[h]>0)
          {
              ctr++;
              mp[h]--;
          }
          else if(mp.find(k-h)!=mp.end() && mp[k-h]>0)
          {
              mp[k-h]--;
              ctr++;
          }
          else
          mp[h]++;
        }
        return ctr==nums.size()/2;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends