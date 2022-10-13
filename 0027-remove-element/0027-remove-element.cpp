class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int n=nums.size();
        for(auto i=nums.begin();i<nums.end();i++)
        {
            if(*i==val)
            {
                nums.erase(i);
                i--;
                k++;
            }
        }
        return n-k;
    }
};