#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<int> b(n);
        vector<ll> xs;
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            if (b[i] != -1) {
                xs.push_back(a[i] + b[i]);
            }
        }
        if (!xs.empty()) {
            ll x = xs[0];
            bool valid = true;
            for (ll num : xs) {
                if (num != x) {
                    valid = false;
                    break;
                }
            }
            if (!valid) {
                cout << "0\n";
                continue;
            }
            bool possible = true;
            for (int i = 0; i < n; ++i) {
                if (b[i] == -1) {
                    ll bi = x - a[i];
                    if (bi < 0 || bi > k) {
                        possible = false;
                        break;
                    }
                }
            }
            cout << (possible ? "1\n" : "0\n");
        } else {
            ll max_a = *max_element(a.begin(), a.end());
            ll min_ak = LLONG_MAX;
            for (int i = 0; i < n; ++i) {
                min_ak = min(min_ak, a[i] + (ll)k);
            }
            if (max_a > min_ak) {
                cout << "0\n";
            } else {
                cout << (min_ak - max_a + 1) << "\n";
            }
        }
    }
    return 0;
}