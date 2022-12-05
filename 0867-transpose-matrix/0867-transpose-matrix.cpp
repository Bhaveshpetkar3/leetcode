class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<vector<int>> ans;
        vector<int> abc;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
               
                abc.push_back(matrix[j][i]);
            }
            ans.push_back(abc);
            abc.clear();
        }
        
        return ans;
    }
};