#include <bits/stdc++.h>
using namespace std;

int bfs(int start, const vector<vector<int>>& adj, int& far_node) {
    int n = adj.size();
    vector<int> dist(n, -1);
    dist[start] = 0;
    queue<int> q;
    q.push(start);
    far_node = start;

    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
                if (dist[v] > dist[far_node]) far_node = v;
            }
        }
    }
    return dist[far_node];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<vector<int>> adj(n+1);
        vector<int> degree(n+1, 0);

        for (int i = 0; i < n - 1; i++) {
            int u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            degree[u]++;
            degree[v]++;
        }

        // Find tree diameter
        int far_node = 1;
        bfs(1, adj, far_node);
        int diameter_length = bfs(far_node, adj, far_node);

        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (degree[i] >= 3) count++;
        }

        int answer = 0;
        if (diameter_length <= 2) {
            answer = 0; // already minimal diameter
        } else {
            if (count == 0) {
                answer = 0; // path or star, no operation needed
            } else {
                answer = count + 1;
            }
        }

        cout << answer << "\n";
    }

    return 0;
}
