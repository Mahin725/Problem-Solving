#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

ll mod_pow(ll base, ll exp, ll mod) {
    ll res = 1;
    while(exp) {
        if(exp & 1) res = res * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll a, b, k;
        cin >> a >> b >> k;
        ll n, m;
        if(k == 1) {
            n = a;
            m = b;
        } else {
            n = (a + (a-1)*(k-1)) % MOD;
            ll ka = mod_pow(k, a, MOD);
            m = (b + (b-1)*(ka-1) % MOD * mod_pow(k-1, MOD-2, MOD) % MOD) % MOD;
        }
        cout << n << " " << m << "\n";
    }
    return 0;
}