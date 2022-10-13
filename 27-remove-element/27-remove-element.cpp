class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int cnt = 0;
    for(int i = 0 ; i < nums.size() ; ++i) {
        if(nums[i] == val)
            cnt++;
        else
            nums[i-cnt] = nums[i];
    }
    return nums.size()-cnt;   
    }
};
//alternate
// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int ptr = 0;
        
//         for (int i = 0; i < nums.size(); i++)
//             if (nums[i] != val) nums[ptr++] = nums[i];
        
//         return ptr;
//     }
// };
