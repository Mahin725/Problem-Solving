#include <bits/stdc++.h>
using namespace std;

struct Coord {
    int x, y;
};

bool areAdjacent(const Coord& a, const Coord& b) {
    if (a.x == b.x) {
        return abs(a.y - b.y) == 1;
    } else {
        return a.y == b.y;
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    vector<int> deg(n + 1, 0);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }

    // Check max degree
    for (int i = 1; i <= n; ++i) {
        if (deg[i] > 3) {
            cout << "No\n";
            return;
        }
    }

    // Check bipartite
    vector<int> color(n + 1, -1);
    bool isBipartite = true;
    queue<int> q;
    for (int i = 1; i <= n; ++i) {
        if (color[i] == -1) {
            color[i] = 0;
            q.push(i);
            while (!q.empty()) {
                int u = q.front();
                q.pop();
                for (int v : adj[u]) {
                    if (color[v] == -1) {
                        color[v] = color[u] ^ 1;
                        q.push(v);
                    } else if (color[v] == color[u]) {
                        isBipartite = false;
                        break;
                    }
                }
                if (!isBipartite) break;
            }
            if (!isBipartite) break;
        }
    }
    if (!isBipartite) {
        cout << "No\n";
        return;
    }

    // Assign coordinates
    vector<Coord> pos(n + 1);
    vector<bool> visited(n + 1, false);
    vector<int> parent(n + 1, -1);
    queue<int> bq;

    // Find a root node
    int root = 1;
    pos[root] = {0, 0};
    visited[root] = true;
    bq.push(root);

    bool valid = true;

    while (!bq.empty()) {
        int u = bq.front();
        bq.pop();
        int cnt = 0;

        for (int v : adj[u]) {
            if (v == parent[u]) continue;

            if (!visited[v]) {
                if (cnt == 0) {
                    pos[v] = {1 - pos[u].x, pos[u].y};
                } else if (cnt == 1) {
                    pos[v] = {pos[u].x, pos[u].y + 1};
                } else {
                    pos[v] = {pos[u].x, pos[u].y - 1};
                }
                cnt++;
                if (cnt > 3) break;

                visited[v] = true;
                parent[v] = u;
                bq.push(v);
            } else {
                // Check if back edge is adjacent
                if (!areAdjacent(pos[u], pos[v])) {
                    valid = false;
                }
            }
        }
        if (cnt > 3) {
            valid = false;
            break;
        }
    }

    if (!valid) {
        cout << "No\n";
        return;
    }

    // Check all visited
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            cout << "No\n";
            return;
        }
    }

    // Check all coordinates are within limits
    for (int i = 1; i <= n; ++i) {
        if (pos[i].x < 0 || pos[i].x > 1 || pos[i].y < -200000 || pos[i].y > 200000) {
            cout << "No\n";
            return;
        }
    }

    // Output
    cout << "Yes\n";
    for (int i = 1; i <= n; ++i) {
        cout << pos[i].x << ' ' << pos[i].y << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}