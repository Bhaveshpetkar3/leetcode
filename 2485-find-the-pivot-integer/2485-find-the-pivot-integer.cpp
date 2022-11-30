class Solution {
public:
    int pivotInteger(int n) {
        int tsum=(n*(n+1))/2;
        vector <int> runsum;
        int j=0;
        if(n==1)return 1;
        runsum.push_back(1);
        for(int i=1;i<n;i++)
        {
            runsum.push_back((i+1)+runsum[i-1]);
            if(runsum[i]==tsum-runsum[i-1])return i+1;
        }
        for(auto i : runsum)cout<<i<<" ";
        return -1;
    }
};