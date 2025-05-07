#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define ull unsigned long long
using namespace std;

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

ll f(vector<ll> &even, vector<ll> &odd) {
    ll n1 = even.size();
    ll mx = odd.back();
    if (mx < even[0]) {
        return n1 + 1;
    }

    ll ans = 0;
    for (ll i = 0; i < n1; i++) {
        if (even[i] > mx) {
            return n1 + 1;
        } else {
            ans++;
            mx += even[i];
        }
    }
    return ans;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> odd, even;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        (x % 2) ? odd.push_back(x) : even.push_back(x);
    }

    if (odd.empty() || even.empty()) {
        cout << 0 << '\n';
        return;
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    ll ans = f(even, odd);
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll tt;
    cin >> tt;
    while (tt--) {
        solve();
    }

    return 0;
}
