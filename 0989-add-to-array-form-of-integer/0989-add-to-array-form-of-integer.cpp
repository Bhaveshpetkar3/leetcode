class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry=0,i=num.size()-1,j;
        vector <int> ans;
        while(i>=0 || carry || k>0)
        {
            if(i>=0)j=k>0?carry+num[i--]+k%10:carry+num[i--];
            else j=k>0?carry+k%10:carry;
            ans.push_back(j%10);
            carry=j/10;
            k/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};