/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : A_Shashliks.cpp
 * platform: 
 * Date: 15 - 06 - 2025
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll simulate(ll k, ll a1, ll a2, ll d1, ll d2) {
    ll total = 0;

    if (k >= a1) {
        ll cook1 = (k - a1) / d1 + 1;
        total += cook1;
        k -= cook1 * d1;
    }

    if (k >= a2) {
        ll cook2 = (k - a2) / d2 + 1;
        total += cook2;
        k -= cook2 * d2;
    }

    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        ll way1 = simulate(k, a, b, x, y);
        ll way2 = simulate(k, b, a, y, x);

        cout << max(way1, way2) << '\n';
    }

    return 0;
}
