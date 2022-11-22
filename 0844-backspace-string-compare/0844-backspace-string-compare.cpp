class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans1="";
        string ans2="";
        for(auto i:s)
        {
            if(i=='#')
            {
                if(ans1.size()==0)continue;
                else ans1.pop_back();
            }
            else
                ans1+=i;
        }
        for(auto i:t)
        {
            if(i=='#')
            {
                if(ans2.size()==0)continue;
                else ans2.pop_back();
            }
            else
                ans2+=i;
        }
        cout<<ans1<<" "<<ans2<<" ";
        cout<<"\n";
        if(ans1.compare(ans2)==0)return true;
        return false;
    }
};