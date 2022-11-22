class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map <char,int> j;
        int ans=0;
        for(auto i:jewels)
        {
            j[i]++;
        }
        for(auto i:stones)
        {
            if(j[i]!=0)ans++;
        }
        return ans;
    }
};