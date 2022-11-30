class Solution {
public:
      int search(vector<int>& mat)
        {
            int low=0,high=mat.size()-1;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(mat[mid]>=0)
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
                
            }
            return mat.size()-(high+1);
        }
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int j=0,ans=0;
        while(j<grid.size())
        {
            ans+=search(grid[j++]);
        }
        return ans;
    }
};