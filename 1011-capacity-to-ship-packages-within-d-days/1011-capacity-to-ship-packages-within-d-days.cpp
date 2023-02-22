class Solution {
public:
    int shipWithinDays(vector<int>& a, int b) {
        int l=0,r=999999;
        while(r-1>l){
            int mid=(l+r)/2;
            bool check=1;
            int days=1,tot=0;
            for(int i=0;i<a.size();i++){
                if(a[i]>mid) check=0;
                //continue;
                tot+=a[i];
                if(tot>mid) 
                {
                    tot=a[i];
                    days++;
                }
            }
            if(days>b) check=false;
            if(check) r=mid;
            else l=mid;
        }
        return r;        
    }
};