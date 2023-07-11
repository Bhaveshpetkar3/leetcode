class Solution {
public:
    int minOperations(vector<int>& arr, int x) {
        int n=arr.size();
        int g=0;
        for(auto i: arr)g+=i;      
        int k=g-x;
        if(x>g)return -1;
        if(!k)return n;
        int i=0,j=0;
        int ans=INT_MIN;
        long long sum=0;
        while(j<n)
        {
            sum+=arr[j];
            while(i<n and sum>k)
            {
                sum-=arr[i];
                i++;                
            }
            if(sum==k)ans=max(ans,j-i+1);
            j++;
        }
        return ans==INT_MIN?-1:n-ans;
    }
};