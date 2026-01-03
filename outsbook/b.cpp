#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<long long> r_sum(n, 0);
    vector<bool> hasZero(n, false);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            long long x;
            cin >> x;
            if (x == 0) hasZero[i] = true;
            r_sum[i] += x;
        }
    }

    long long target = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        if (!hasZero[i]) {
            if (target == LLONG_MIN)
                target = r_sum[i];
            else if (r_sum[i] != target) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}
