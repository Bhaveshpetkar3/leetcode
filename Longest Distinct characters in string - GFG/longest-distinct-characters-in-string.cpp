//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    int n=s.size();
        int i=0,j=0;
        vector<int> mp(256, 0);
        int ans=INT_MIN;
        while(j<n)
        {
            if(mp[s[j]]==0)
            {
                ans=max(ans,j-i+1);
                
            }
            else
            {
                //int b=0;
                while(s[i]!=s[j])
                {
                    mp[s[i]]=0;
                    i++;
                }
                mp[s[i]]=0;
                i++;
            }
            mp[s[j]]=1;
            j++;
        }
        return ans==INT_MIN?0:ans;
}