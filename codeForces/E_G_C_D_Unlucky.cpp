#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll gcd(ll a, ll b) {
    while (b) a %= b, swap(a, b);
    return a;
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> p(n), s(n);
        for (int i = 0; i < n; ++i) cin >> p[i];
        for (int i = 0; i < n; ++i) cin >> s[i];

        vector<ll> a(n);
        bool ok = true;

        for (int i = 0; i < n; ++i) {
            ll val = lcm(p[i], s[i]);
            if (val > 1e9) {
                ok = false;
                break;
            }
            a[i] = val;
        }

        vector<ll> pref(n), suff(n);
        pref[0] = a[0];
        for (int i = 1; i < n; ++i)
            pref[i] = gcd(pref[i - 1], a[i]);

        suff[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; --i)
            suff[i] = gcd(suff[i + 1], a[i]);

        for (int i = 0; i < n; ++i) {
            if (pref[i] != p[i] || suff[i] != s[i]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
