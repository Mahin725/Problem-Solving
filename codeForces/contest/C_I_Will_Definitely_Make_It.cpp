#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

bool solve() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    int max_h = 0;
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
        max_h = max(max_h, h[i]);
    }
    k--; // Adjust to 0-based index

    if (h[k] == max_h) {
        return true;
    }

    queue<int> q;
    q.push(k);
    vector<bool> visited(n, false);
    visited[k] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v = 0; v < n; ++v) {
            if (!visited[v]) {
                int start_time = h[u] - 1;
                int travel_time = abs(h[u] - h[v]);
                int arrival_time = start_time + travel_time;

                if (arrival_time < h[v]) {
                    visited[v] = true;
                    q.push(v);
                    if (h[v] == max_h) {
                        return true;
                    }
                }
            }
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        if (solve()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}