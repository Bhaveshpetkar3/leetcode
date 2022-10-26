class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int roworg=mat.size(), colorg=mat[0].size();
        int no=roworg*colorg;
        if(no!=r*c)return mat;
        int i=0,j=0,m=0,n=0;
        vector<vector<int>> ans(r,vector<int>(c));
        while(no--)
        {
            if(j==c)j=0,i++;
            if(n==colorg)n=0,m++;
            ans[i][j++]=mat[m][n++];
        }
        return ans;
    }
};