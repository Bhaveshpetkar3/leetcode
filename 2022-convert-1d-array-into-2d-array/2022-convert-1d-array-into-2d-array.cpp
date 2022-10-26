class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int total=m*n;
        int r=0,c=0,h=0;
        vector<vector<int>> dummy;
        vector<vector<int>> ans(m,vector <int>(n));
        if(total!=size(original))return dummy;
        while(total--)
        {
            if(c==n)c=0,r++;
            ans[r][c++]=original[h++];
        }
        return ans;
    }
};