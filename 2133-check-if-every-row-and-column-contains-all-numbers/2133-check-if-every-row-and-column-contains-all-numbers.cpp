class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        map <int,int> mp1;
        int n=matrix.size();
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                mp1[matrix[i][j]]++;
            }
            if(mp1.size()!=n)return false;
            mp1.clear();
        }
        for(int j=0;j<matrix[0].size();j++)
        {
            for(int i=0;i<matrix.size();i++)
            {
                mp1[matrix[i][j]]++;
            }
            if(mp1.size()!=n)return false;
            mp1.clear();
        }
        return true;
    }
};