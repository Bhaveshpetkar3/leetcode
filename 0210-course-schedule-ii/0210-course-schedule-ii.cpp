class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        int V=n;
        vector<int> adj[V];
        vector<int> indegree(n,0);
        vector<int> ans;
        for(auto i: pre)
        {
            indegree[i[0]]++;
            adj[i[1]].push_back(i[0]);
        }
        queue<int> q;
		for (int i = 0; i < V; i++) {
			if (indegree[i] == 0) {
				q.push(i);
			}
		}
		vector<int> topo;
		while (!q.empty()) {
			int node = q.front();
			q.pop();
			topo.push_back(node);

			for (auto it : adj[node]) {
				indegree[it]--;
				if (indegree[it] == 0) q.push(it);
			}
		}
        if(topo.size()!=n)return ans;
		return topo;
    }
};