class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map <int,pair<int,int>> mpp;
        vector<vector<int>> ans(2);
        for(int i=0;i<matches.size();i++)
        {
                mpp[matches[i][0]].first++;
                mpp[matches[i][1]].second++;
        }
        for (auto i :mpp)
        {
            if((i.second).second==0)
            {
                ans[0].push_back(i.first);
                continue;
            }
            if((i.second).second==1) ans[1].push_back(i.first);
        }
        return ans;
    }
};