class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source,
                   int destination) {
        vector<vector<int>> graph(n);
        for (auto node : edges) {
            int u = node[0];
            int v = node[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        queue<int> q;
        vector<int> vis(n, 0);
        q.push(source);
        vis[source] = 1;
        while (!q.empty()) {
            int parent = q.front();
            q.pop();
            if(parent==destination)return true;
            for (auto child : graph[parent]) {
                if (vis[child] == 0) {
                    q.push(child);
                    vis[child] = 1;
                }
            }
        }
        return false;
    }
};