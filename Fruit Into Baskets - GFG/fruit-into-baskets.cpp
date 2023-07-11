//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(int n, vector<int> &arr) {
        int i=0,j=0;
        int ans=1;
        unordered_map<int,int> mp;
        while(j<n)
        {
            mp[arr[j]]++;
            if(mp.size()<=2)
                ans=max(ans,j-i+1);
            else
            {
                if(mp.size()>2)
                {
                    while(mp.size()!=2)
                    {
                        mp[arr[i]]--;
                        if(mp[arr[i]]==0)mp.erase(arr[i]);
                        i++;
                    }
                }
            }
            j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> fruits(N);
        for (int i = 0; i < N; i++) cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends