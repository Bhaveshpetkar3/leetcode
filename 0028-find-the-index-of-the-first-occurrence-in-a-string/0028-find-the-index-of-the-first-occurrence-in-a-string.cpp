class Solution {
public:
    int strStr(string h, string n) {
        int hs=h.size();
        int ns=n.size();
        int i=0;
        while(i<=hs-ns+1)
        {
            int j=0,k=i+1;
            while(j<ns && h[i]==n[j])i++,j++;
            if(j==ns)return i-ns;
            i=k;
        }
        return -1;
    }
};