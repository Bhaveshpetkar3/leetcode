class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_map<char,int> mpp;
        int ctr1=0,ctr2=0;
        mpp['a']=1;
        mpp['e']=1;
        mpp['i']=1;
        mpp['o']=1;
        mpp['u']=1;
        mpp['A']=1;
        mpp['E']=1;
        mpp['I']=1;
        mpp['O']=1;
        mpp['U']=1;
        for(int i=0;i<s.size()/2;i++)
        {
            if(mpp[s[i]])ctr1++;
            if(mpp[s[i+s.size()/2]])ctr2++;
        }
    return ctr1==ctr2;
    }
};