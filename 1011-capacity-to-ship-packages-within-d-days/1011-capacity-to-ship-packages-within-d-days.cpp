class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l=0,r=0;
        for(int i : weights){
            l = max(l, i);
            r += i;
        }
        l-=1;
        int mid;bool flag;
        while(r>l+1){
            mid=(l+r)/2;
            flag=1;
            int n=1,Size=0;
            for(int i=0;i<weights.size();i++){
                if(weights[i]>mid)
                {
                    flag=0;
                    break;
                }
                Size+=weights[i];
                if(Size>mid) 
                {
                    Size=weights[i];
                    n++;
                }
            }
            if(n>days) flag=false;
            if(flag) r=mid;
            else l=mid;
        }
        return r;        
    }
};