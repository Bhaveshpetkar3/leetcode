//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    string findOrder(string dict[], int n, int K) {
        int V=n;
        vector<int> adj[K];
        vector<int> indg(K,0);
        //int h=sizeof(dict[0])/sizeof(dict[0][0]);
        //int v=dict[0].size();
        //cout<<v<<endl;
        //cout<<h<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     vector<int> vis(K,0);
        //     int h=dict[i].size();
        //     vis[dict[i][0]]=1;
        //     for(int j=1;j<h;j++)
        //     {
        //         if(!vis[dict[i][j]])
        //         {
        //             vis[dict[i][j]]=1;
        //             //cout<<(dict[i][j-1]-97)<<" ";
        //             adj[(dict[i][j-1])-97].push_back((dict[i][j])-97);
                    
        //         }
        //     }
        // }
        // //cout<<endl;
        // for(int i=0;i<K;i++)
        // {
        //     for(auto j:adj[i])cout<<j<<" ";
        //     cout<<endl;
        // }
        
        for(int i=0;i<n-1;i++)
        {
            int j=0,k=0;
            int z=dict[i].size();
            int m=dict[i+1].size();
            while(j<z and k<m and dict[i][j]==dict[i+1][k])
            {
                j++,k++;
            }
            if(j==z || k==m)continue;
            adj[(dict[i][j])-97].push_back((dict[i+1][k])-97);
            indg[dict[i+1][k]-97]++;
        }
        //cout<<adj[].size();
        // for(auto i:adj)
        // {
        // for(auto j:i)cout<<j<<" ";
        // cout<<endl;
        // }
        //for(auto i:indegree)cout<<i<<" ";
    //     for(int i=0;i<V;i++)
	   //{
	   //    for(auto it:adj[i])
	   //    indg[it]++;
	   //}
	   queue<int> q;
	   string ans="";
	   for(int i=0;i<K;i++)
	   {
	       if(!indg[i])q.push(i);
	   }
	   //vector<int> ans;
	   while(!q.empty())
	   {
	       int node=q.front();
	       q.pop();
	       char c=node+97;
	       ans+=c;
	       for(auto i:adj[node])
	       {
	           indg[i]--;
	           if(indg[i]==0)q.push(i);
	       }
	   }
	   return ans;
        string i="";
        return i;
    }
};

//{ Driver Code Starts.
string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();

    return p1 < p2;
}

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++) cin >> dict[i];
        
        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++) order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i]) f = false;

        if(f)cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends