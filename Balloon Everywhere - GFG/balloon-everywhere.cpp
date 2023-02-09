//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        unordered_map<char,int> mpp;
        mpp['b']=0,mpp['a']=0,mpp['l']=0,mpp['o']=0,mpp['n']=0;
        int mini=INT_MAX;
        for(auto i: s)
            if(mpp.count(i))
                mpp[i]++;
        mpp['l']/=2;
        mpp['o']/=2;
        for(auto i:mpp)mini=min(mini,i.second);
        return mini;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends