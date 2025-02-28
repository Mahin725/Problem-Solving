#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    long long a, b, c;
    Edge(long long a, long long b, long long c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

long long dis[1005];
long long n, e;
vector<Edge> edge_list;

bool bellman_ford(int src) {
    for (int i = 1; i <= n; i++)
        dis[i] = LONG_MAX;
    dis[src] = 0;

    for (int i = 0; i < n - 1; i++) {
        for (auto ed : edge_list) {
            long long a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if (dis[a] != LONG_MAX && dis[a] + c < dis[b])
                dis[b] = dis[a] + c;
        }
    }

    for (auto ed : edge_list) {
        long long a, b, c;
        a = ed.a;
        b = ed.b;
        c = ed.c;
        if (dis[a] != LONG_MAX && dis[a] + c < dis[b]) {
            return false; // Negative Cycle Detected
        }
    }

    return true;
}

int main() {
    cin >> n >> e;
    for (int i = 0; i < e; i++) {
        long long a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }

    int src;
    cin >> src;

    int t;
    cin >> t;
    vector<int> test_cases(t);
    for (int i = 0; i < t; i++) {
        cin >> test_cases[i];
    }

    bool no_negative_cycle = bellman_ford(src);

    if (!no_negative_cycle) {
        cout << "Negative Cycle Detected" << endl;
    } else {
        for (int dest : test_cases) {
            if (dis[dest] == LONG_MAX) {
                cout << "Not Possible" << endl;
            } else {
                cout << dis[dest] << endl;
            }
        }
    }

    return 0;
}