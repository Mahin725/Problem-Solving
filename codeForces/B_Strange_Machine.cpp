/*************************************************************
    بسم الله الرحمن الرحيم
    "And He found you lost and guided you."
        — Al-Qur'an (93:7)

    Note: All knowledge belongs to Allah, the Most High.

    Author   : Raihanul Islam Sharif
    Contact  : rihanulislam2015@gmail.com
*************************************************************/

#include <bits/stdc++.h>
using namespace std;

// Type Aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;

// Constants
const int INF_INT = 1e9;
const ll INF_LL = 1e18;
const int MOD = 1e9 + 7;
const int MXN = 2e5 + 5; // Maximum N (problem dependent)

// Utility Functions

// Fast power (a^b % mod)
ll modpow(ll a, ll b, ll mod = MOD)
{
    ll res = 1;
    a %= mod;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

// GCD
ll gcdll(ll a, ll b)
{
    while (b)
    {
        ll t = a % b;
        a = b;
        b = t;
    }
    return a;
}

// LCM
ll lcmll(ll a, ll b)
{
    return a / gcdll(a, b) * b;
}

void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<ll> queries(q);
    for (int i = 0; i < q; ++i)
        cin >> queries[i];

    bool all_a = true;
    for (char c : s)
    {
        if (c != 'A')
        {
            all_a = false;
            break;
        }
    }

    for (ll a : queries)
    {
        if (all_a)
        {
            cout << a << "\n";
            continue;
        }

        ll ans = 0;
        while (a > 0)
        {
            if (s[ans % n] == 'A')
                a -= 1;
            else
                a /= 2;
            ans++;
        }
        cout << ans << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
