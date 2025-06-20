#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solve()
{
    int n, d;
    long long c;
    cin >> n >> c >> d;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<long long>());
    int l = 0, r = d + 2;
    while (l < r)
    {
        int m = l + (r - l + 1) / 2;
        long long tot = 0;
        int curr = 0;
        for (int i = 0; i < d; i++)
        {
            if (i % m < n)
            {
                tot += a[i % m];
            }
        }
        if (tot >= c)
        {
            l = m;
        }
        else
        {
            r = m - 1;
        }
    }
    if (l == d + 2)
    {
        cout << "Infinity\n";
        return;
    }
    if (l == 0)
    {
        cout << "Impossible\n";
        return;
    }
    cout << l - 1 << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve();
    }
}