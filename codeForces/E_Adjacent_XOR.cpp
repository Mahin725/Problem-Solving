// author: Raihanuldev
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i) 
        cin >> b[i];

    // Last element must match
    if (a[n - 1] != b[n - 1]) {
        cout << "NO\n";
        return;
    }

    for (int i = 0; i < n - 1; ++i) {
        if (a[i] == b[i]) continue;

        long long need = b[i];

        long long can_do1 = a[i] ^ a[i + 1];
        long long can_do2 = a[i] ^ b[i + 1];

        if (can_do1 == need || can_do2 == need) {
            a[i] = need; 
        } else {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tcase;
    cin >> tcase;
    while (tcase--) solve();
    return 0;
}
