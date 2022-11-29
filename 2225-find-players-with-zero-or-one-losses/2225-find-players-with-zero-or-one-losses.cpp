class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map <int,pair<int,int>> mpp;
        vector<int> ans1;
        vector<int> ans2;
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
        for (auto i = mpp.begin(); i != mpp.end(); i++)
        {
            if((i->second).second==0)
            {
                ans[0].push_back(i->first);
                continue;
            }
            if((i->second).second==1)
            {
                ans[1].push_back(i->first);
            }
            //cout<<i->first<<" ";
                
        }
        for(auto i:ans1)cout<<i<<" ";
        cout<<endl;
        for(auto i:ans2)cout<<i<<" ";
        // sort(ans[0].begin(),ans[0].end());
        // sort(ans[1].begin(),ans[1].end());
        return ans;
    }
};