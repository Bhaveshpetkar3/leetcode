class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA=0,sumB=0;
        map <int,int> mppA;
        map <int,int> mppB;
        for(auto i: aliceSizes)
        {
            sumA+=i;
            mppA[i]++;
        }
        for(auto j: bobSizes)
        {
            sumB+=j;
            mppB[j]++;
        }
        int ans;
        for(auto i:aliceSizes)
        {
            ans=(sumB-sumA)/2+i;
            if(mppB[ans])return {i,ans};
        }
        return {0,0};
    }
};