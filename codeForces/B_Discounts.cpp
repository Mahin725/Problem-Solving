// author: Raihanul Islam
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    if (!(cin >> tcase))
        return 0;
    while (tcase--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        vector<int> b(k);
        for (int i = 0; i < k; ++i)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ll total = 0;
        for (ll x : a)
            total += x;

        ll fre_sum = 0;

        int r = n - 1;

        for (int i = 0; i < k && r >= 0; ++i)
        {
            int bi = b[i];
            if (bi == 1)
            {
                fre_sum += a[r];
                r -= 1;
            }
            else
            {
                int remain = r + 1;
                if (bi > remain)
                {
                    continue;
                }
                int idx = r - (bi - 1);
                fre_sum += a[idx];
                r -= bi;
            }
        }

        cout << (total - fre_sum) << '\n';
    }
    return 0;
}
