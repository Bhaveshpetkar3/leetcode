class Solution {
public:
    int thirdMax(vector<int>& nums) {
        map<int,int> mp;
        if(nums.size()<3)
        {
            if(nums.size()==1)return nums[0];
            else return max(nums[0],nums[1]);
        }
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        if(mp.size()==1)
        {
            auto it_fwd = mp.rbegin();
            return it_fwd->first;
        }
        else if(mp.size()==2)
        {
            auto it_fwd = mp.rbegin();
            auto it_fwd1 = mp.rbegin();
            advance(it_fwd1, 1);
            
            return max(it_fwd->first,it_fwd1->first);   
        }
         auto it_fwd = mp.rbegin();
         advance(it_fwd, 2);  
        return it_fwd->first;
    }
};