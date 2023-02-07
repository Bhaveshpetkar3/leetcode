class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        unordered_map<int,int> mpp;
        if(fruits.size()==1)return 1;
        int i=1,mx=0;
        int flag=1,ans=1;
        mpp[fruits[0]]++;
        pair<int,int> pehla,dusra;
        pehla.first=fruits[0];
        pehla.second=0;
        while(i<n)
        {
            while(i<n && mpp.size()<=2)
            {
                mpp[fruits[i]]++;
                if(mpp.size()>2)
                {
                    mpp.clear();
                    if(fruits[i-1]==pehla.first)ans=pehla.second-dusra.second;
                    else ans=dusra.second-pehla.second;
                    mpp[fruits[i-1]]++;
                    pehla.first=fruits[i-1];
                    pehla.second=i-1,flag=1;
                    break;
                }
                if(mpp.size()==2 && flag==1)
                {
                    dusra.first=fruits[i];
                    dusra.second=i;
                    flag=0;
                }
                if(fruits[i]==pehla.first)pehla.second=i;
                else dusra.second=i;
                ans++;
                mx=max(ans,mx);
                i++;
            }
        }
        return mx;
        }
};