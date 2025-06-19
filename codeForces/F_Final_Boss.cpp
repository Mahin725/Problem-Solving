#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        ll h;
        int n;
        cin >> h >> n;

        vector<ll> a(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        auto ok = [&](ll mid)
        {
            ll dam = 0;
            for (int i = 0; i < n; i++)
            {
                ll times = (mid + c[i] - 1) / c[i]; 
                dam += a[i] * times;
                if (dam >= h)
                    return true;
            }
            return false;
        };

        ll low = 1, high = 1e12, ans = 0;
        while (low <= high)
        {
            ll mid = low + (high - low) / 2;
            if (ok(mid))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
