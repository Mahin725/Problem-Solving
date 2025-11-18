#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<bool> prefix(n), suffix(n);

    int current_min = a[0];
    prefix[0] = true;
    for (int i = 1; i < n; ++i) {
        if (a[i] > current_min) {
            prefix[i] = true;
            current_min = min(current_min, a[i]);
        } else break;
    }

    int current_max = a[n - 1];
    suffix[n - 1] = true;
    for (int i = n - 2; i >= 0; --i) {
        if (a[i] < current_max) {
            suffix[i] = true;
            current_max = max(current_max, a[i]);
        } else break;
    }

    string res(n, '0');
    for (int i = 0; i < n; ++i) {
        if ((prefix[i] || i == 0) && (suffix[i] || i == n - 1)) {
            res[i] = '1';
        }
    }

    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
