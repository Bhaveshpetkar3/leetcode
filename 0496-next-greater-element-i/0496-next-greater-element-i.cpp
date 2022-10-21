class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>stk;
        vector <int> ans(nums2.size());
        map<int,int> mp;
        vector <int> ans1(nums1.size());
        for(int i=0;i<nums2.size();i++)
        {
            mp[nums2[i]]=i;
            //cout<<mp[nums2[i]]<<" ";
        }
        
        //stk.push(-1);
        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(!stk.empty() && nums2[i]>=stk.top())stk.pop();
            if(stk.empty())ans[i]=-1;
            else
            {
                ans[i]=stk.top();
            }
            stk.push(nums2[i]);
        } for(int i=0;i<nums2.size();i++)cout<<ans[i]<<" ";
        for(int i=0;i<nums1.size();i++)
        {
            ans1[i]=ans[mp[nums1[i]]];
        }
        return ans1;
        
    }
};