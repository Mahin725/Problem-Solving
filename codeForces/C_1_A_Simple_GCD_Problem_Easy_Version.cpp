#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll gcd(ll x, ll y)
{
    while (y)
    {
        ll t = y;
        y = x % y;
        x = t;
    }
    return x;
}

ll lcm(ll x, ll y)
{
    if (x == 0 || y == 0)
        return 0;
    return x / gcd(x, y) * y;
}

void raihanulSolve()
{
    int n;
    cin >> n;
    vector<ll> a(n + 2);
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        ll bb;
        cin >> bb;
    }
    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        ll di;
        if (i == 1)
        {
            di = gcd(a[1], a[2]);
        }
        else if (i == n)
        {
            di = gcd(a[n - 1], a[n]);
        }
        else
        {
            ll g1 = gcd(a[i - 1], a[i]);
            ll g2 = gcd(a[i], a[i + 1]);
            di = lcm(g1, g2);
        }
        if (di < a[i])
        {
            ++ans;
        }
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin>>tcase;
    while(tcase--){
        raihanulSolve();
    }
    return 0;
}