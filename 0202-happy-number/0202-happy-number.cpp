class Solution {
public:
    bool isHappy(int n) {
        map <int,int> mp;
        //notice the word cycle in the 2nd line of the question,so the value will repeat
        while(true)
        {
            int sum=0;
            if(mp[1])return true;
            if(mp[n]>1)return false;
            int k=n;
            while(k)
            {
                sum+=pow((k%10),2);
                    k/=10;
                
            }
            cout<<sum<<" ";
            n=sum;
            mp[sum]++;
        }
    }
};