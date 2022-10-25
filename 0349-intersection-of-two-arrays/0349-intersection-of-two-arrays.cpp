class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        map <int,int> mp;
        int i=0,j=0;
        vector <int> ans;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]==nums2[j])
            {
                
                if(mp[nums1[i]]==0){
                    ans.push_back(nums1[i]);
                    mp[nums1[i]]++;
                }
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j])i++;
            else j++;
        }
       
        return ans;
    }
};