#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int &x : a) cin >> x;

    ll res = 0;

    const int MAX_VAL = 1e6 + 5;
    vector<int> bit(MAX_VAL, 0);

    auto update = [&](int idx) {
        for (; idx < MAX_VAL; idx += idx & -idx) bit[idx]++;
    };

    auto query = [&](int idx) {
        int sum = 0;
        for (; idx > 0; idx -= idx & -idx) sum += bit[idx];
        return sum;
    };

    for (int i = n - 1; i >= 0; --i) {
        res += query(a[i]); 
        update(a[i]);
    }

    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
