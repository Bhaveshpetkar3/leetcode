class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> mpp;
        int t=0;
        for(auto i:order)mpp[i]=t++;
        string prev,curr;
        for(int i=0;i<words.size()-1;i++)
        {
            prev=words[i];
            curr=words[i+1];
            int j=0,k=0;
            while(j<prev.size() && k<curr.size())
            {
                if(mpp[prev[j]]==mpp[curr[k]])
                {
                    j++,k++;
                    continue;
                }
                if(mpp[prev[j]]>mpp[curr[k]])return false;
                if(mpp[prev[j]]<mpp[curr[k]])break;
                j++;
                k++;
            }
            if(k==curr.size() and j<prev.size())return false;
        }
        return true;
    }
};