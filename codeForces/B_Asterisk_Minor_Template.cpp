#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    string a, b;
    cin >> a >> b;

    int n = (int) a.size();
    int m = (int) b.size();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            if (a[i] == b[j] && a[i + 1] == b[j + 1]) {
                cout << "YES" << '\n';
                cout << '*' << a[i] << a[i + 1] << '*' << '\n';
                return;
            }
        }
    }

    if (a[0] == b[0]) {
        cout << "YES" << '\n';
        cout << a[0] << '*' << '\n';
    } else if (a[n - 1] == b[m - 1]) {
        cout << "YES" << '\n';
        cout << '*' << a[n - 1] << '\n';
    } else {
        cout << "NO" << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) solve();

    return 0;
}
