#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    sort(a.begin(), a.end());

    // Iterate candidate GCDs from largest to smallest
    for (int d = mx; d >= 1; d--) {
        int cnt = 0;
        for (int x : a) {
            if (x < d) cnt++;
        }
        if (cnt <= k) {
            cout << d << "\n";
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
