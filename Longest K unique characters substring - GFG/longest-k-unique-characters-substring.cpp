//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    int n=s.size();
int i=0,j=0;
map<char,int> mp;
int ans=-1;
while(j<n)
{
    mp[s[j]]++;
	if(mp.size()==k)
	{
	    //cout<<i<<" "<<j<<endl;
		ans=max(ans,j-i+1);
	}
	else
	{
		if(mp.size()>k)
		{
		    mp[s[i]]--;
		    while(mp[s[i]]!=0)
		    {
		        i++;
		        mp[s[i]]--;
		    }
		    mp.erase(s[i]);
		    i++;
		}
	}
	
	j++;
}
return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends