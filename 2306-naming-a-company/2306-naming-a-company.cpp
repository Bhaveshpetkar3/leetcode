class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        map<string,int> mpp[26];
        //int j=0;
        long long ans=0;
        int common=0;
        for(auto i:ideas)mpp[i[0]-'a'][i.substr(1)]=1;
        //string a="offee";
        //cout<<mpp[2].size();
        //for(auto i: mpp[2])cout<<i.first<<" ";
        //if(mpp[2].find(a)!=mpp[2].end())cout<<"kya re chikne";
        for(int i=0;i<25;i++)
        {
            for(int j=i+1;j<26;j++)
            {
                common=0;
                for(auto k:mpp[j])if(mpp[i].count(k.first))common++;
                ans+=(mpp[i].size()-common)*(mpp[j].size()-common)*2;
            }
        }
        return ans;
    }
};