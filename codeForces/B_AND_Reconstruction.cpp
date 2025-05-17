#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n;
    cin >> n;
    vector<int> b(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> b[i];
    }

    vector<int> a(n);
    a[0] = b[0]; 
    for (int i = 1; i < n - 1; ++i) {
        a[i] = b[i - 1] | b[i]; 
    }
    a[n - 1] = b[n - 2]; 

    for (int i = 1; i < n; ++i) {
        if ((a[i] & a[i - 1]) != b[i - 1]) {
            cout << -1 << '\n';
            return;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << '\n';
}

int32_t main() {
    FAST;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
