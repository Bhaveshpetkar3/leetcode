class Solution {
public:
    int minOperations(vector<int>& arr, int x) {
        int n=arr.size();
        int g=0;
        for(auto i: arr)g+=i;
        //cout<<g<<" ";        
        int k=g-x;
        if(k==0)return n;
        //cout<<k;
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
        return n-ans==n?-1:n-ans;
    }
};