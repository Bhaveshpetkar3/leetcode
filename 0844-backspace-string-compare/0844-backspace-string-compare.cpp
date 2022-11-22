class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans1="";
        string ans2="";
        for(auto i:s)
        {
            if(i=='#' && !ans1.empty())
            {
                ans1.pop_back();
            }
            else if(i!='#')
                ans1+=i;
        }
        for(auto i:t)
        {
            if(i=='#' && !ans2.empty())
            {
                ans2.pop_back();
            }
            else if(i!='#')
                ans2+=i;
        }
        cout<<ans1<<" "<<ans2<<" ";
        cout<<"\n";
        if(ans1.compare(ans2)==0)return true;
        return false;
    }
};