#include <bits/stdc++.h>
using namespace std;

void raihanuldev() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if (a == b) {
        cout << 0 << "\n";
        return;
    }

    const int MAX = 1000;
    vector<int> cost(MAX, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

    cost[a] = 0;
    pq.push(make_pair(0, a));

    while (!pq.empty()) {
        pair<int, int> p = pq.top();
        pq.pop();
        int currCost = p.first;
        int curr = p.second;

        if (curr == b) {
            cout << currCost << "\n";
            return;
        }

        // a + 1
        if (curr + 1 < MAX && cost[curr + 1] > currCost + x) {
            cost[curr + 1] = currCost + x;
            pq.push(make_pair(cost[curr + 1], curr + 1));
        }

        // a ^ 1
        int next = curr ^ 1;
        if (next < MAX && cost[next] > currCost + y) {
            cost[next] = currCost + y;
            pq.push(make_pair(cost[next], next));
        }
    }

    cout << -1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        raihanuldev();
    }

    return 0;
}
