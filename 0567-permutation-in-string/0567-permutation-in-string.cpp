class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26,0);
        for(auto i:s1)
        {
            freq[i-'a']++;
        }
        //for(auto i:freq)cout<<i<<" ";
        int i=0,j=s1.length()-1;
        while(j<=s2.length()-1)
        {
            int k=i;
            vector<int> temp=freq;
            while(k<=j)
            {
                
                if(temp[s2[k]-'a']==0)break;
                temp[s2[k]-'a']--; 
                k++;
            }
            if(k>j)return true;
            i++;j++;
        }
        return false;
    }
};