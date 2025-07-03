#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

pair<vector<ll>, ll> mergesort(vector<ll> w) {
    ll n = w.size();
    if (n <= 1) return {w, 0};

    ll xsz = n / 2, ysz = n - xsz;
    vector<ll> x(xsz), y(ysz);
    for (ll i = 0; i < xsz; i++) x[i] = w[i];
    for (ll i = 0; i < ysz; i++) y[i] = w[xsz + i];

    auto rmx = mergesort(x);
    x = rmx.first;
    auto rmy = mergesort(y);
    y = rmy.first;

    ll a = 0, b = 0, cnt = 0;
    vector<ll> out(n);
    for (ll i = 0; i < n; i++) {
        if (a < xsz && b < ysz) {
            if (y[b] < x[a]) {
                out[i] = y[b++];
                cnt += (xsz - a);
            } else {
                out[i] = x[a++];
            }
        } else if (a == xsz) {
            out[i] = y[b++];
        } else {
            out[i] = x[a++];
        }
    }

    return {out, rmx.second + rmy.second + cnt};
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> v(n);
        for (ll i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
        sort(v.begin(), v.end());
        vector<ll> w(n);
        for (ll i = 0; i < n; i++) w[i] = v[i].second;
        cout << mergesort(w).second << '\n';
    }
    return 0;
}
