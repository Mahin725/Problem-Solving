#include <bits/stdc++.h>
using namespace std;


void solve() {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) { 
                a[i] = -1;
            } else {
                if (i == n - 1) a[i] = 2;
                else a[i] = 3;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << (i + 1 < n ? ' ' : '\n');
        }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcase;
    cin >> tcase;
    while (tcase--) {
        solve();
    }
    return 0;
}
