class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map <int,pair<int,int>> mpp;
        vector<vector<int>> ans(2);
        for(int i=0;i<matches.size();i++)
        {
            for(int j=0;j<2;j++)
            {
                if(j==0)
                mpp[matches[i][j]].first++;
                if(j==1)
                mpp[matches[i][j]].second++;
            }
        }
        for (auto i :mpp)
        {
            if((i.second).second==0)
            {
                ans[0].push_back(i.first);
                continue;
            }
            if((i.second).second==1)
            {
                ans[1].push_back(i.first);
            }
                
        }
        return ans;
    }
};