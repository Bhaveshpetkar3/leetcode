//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int n, vector<pair<int, int> >& pre) {
	    int V=n;
        vector<int> adj[V];
        vector<int> indegree(n,0);
        //vector<int> ans;
        for(auto i: pre)
        {
            indegree[i.first]++;
            adj[i.second].push_back(i.first);
        }
        queue<int> q;
		for (int i = 0; i < V; i++) {
			if (indegree[i] == 0) {
				q.push(i);
			}
		}
		//vector<int> topo;
        int cnt=0;
		while (!q.empty()) {
			int node = q.front();
			q.pop();
			//topo.push_back(node);
            cnt++;
            for (auto it : adj[node]) {
				indegree[it]--;
				if (indegree[it] == 0) q.push(it);
			}
		}
        if(cnt!=n)return 0;
        return 1;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends