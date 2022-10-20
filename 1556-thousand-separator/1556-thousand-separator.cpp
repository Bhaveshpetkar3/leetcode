class Solution {
public:
    string thousandSeparator(int n) {
        string ans=to_string(n);
        if(ans.size()<=3)return ans;
        else
        {
            string temp;
            reverse(ans.begin(),ans.end());
            int i=0;
            while(i<ans.size())
            {
               temp+=ans.substr(i,3)+'.';
                i=i+3;
            }
            temp.pop_back();
            reverse(temp.begin(),temp.end());
            ans=temp;
        }
        cout<<ans;
        return ans;
    }
};
