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

char flipChar(char c)
{
    return (c == '0') ? '1' : '0';
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    string target(n, '0');
    for (int i = 0; i < n; ++i)
    {
        target[i] = (i % 2 == 0 ? '0' : '1');
    }

    auto press = [&](string &a, int idx)
    {
        if (idx - 1 >= 0)
            a[idx - 1] = flipChar(a[idx - 1]);
        a[idx] = flipChar(a[idx]);
        if (idx + 1 < n)
            a[idx + 1] = flipChar(a[idx + 1]);
    };

    auto runScenario = [&](bool press0) -> int
    {
        string a = s;
        int cnt = 0;
        if (press0)
        {
            press(a, 0);
            cnt++;
        }
        for (int i = 1; i < n; ++i)
        {
            if (a[i - 1] != target[i - 1])
            {
                press(a, i);
                cnt++;
            }
        }
        if (a == target)
            return cnt;
        return INF_INT;
    };

    int ans = min(runScenario(false), runScenario(true));
    if (ans >= INF_INT)
        cout << -1 << '\n';
    else
        cout << ans << '\n';
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
