#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcase;
    cin >> tcase;

    while (tcase--) {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll ans = 0, cons = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] <= q) {
                cons++;
                
                if (i == n - 1 || a[i + 1] > q) {
                    if (cons >= k) {
                        ll x = cons - k + 1;
                        ll add = (x * (x + 1)) / 2;
                        ans += add;
                    }
                    cons = 0; 
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
