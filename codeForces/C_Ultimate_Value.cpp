#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll INFLL = (ll)4e18;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcase;
    cin >> tcase;

    while (tcase--)
    {
        int n;
        cin >> n;
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; ++i)
            cin >> a[i];

        ll S = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (i % 2 == 1)
                S += a[i];
            else
                S -= a[i];
        }

        ll maxDelta = LLONG_MIN;
        ll minDelta = LLONG_MAX;

        int firstOdd = -1, lastOdd = -1, firstEven = -1, lastEven = -1;
        for (int i = 1; i <= n; ++i)
        {
            if (i % 2 == 1)
            {
                if (firstOdd == -1)
                    firstOdd = i;
                lastOdd = i;
            }
            else
            {
                if (firstEven == -1)
                    firstEven = i;
                lastEven = i;
            }
        }
        if (firstOdd != -1 && lastOdd != -1 && lastOdd > firstOdd)
        {
            ll d = lastOdd - firstOdd;
            maxDelta = max(maxDelta, d);
            minDelta = min(minDelta, d);
        }
        if (firstEven != -1 && lastEven != -1 && lastEven > firstEven)
        {
            ll d = lastEven - firstEven;
            maxDelta = max(maxDelta, d);
            minDelta = min(minDelta, d);
        }

        ll min_pre_odd = INFLL;
        ll max_pre_eved = -INFLL;

        for (int r = 1; r <= n; ++r)
        {
            if (r % 2 == 0)
            {
                if (min_pre_odd != INFLL)
                {
                    ll cand = (r + 2LL * a[r]) - min_pre_odd;
                    maxDelta = max(maxDelta, cand);
                    minDelta = min(minDelta, cand);
                }
            }
            else
            {
                if (max_pre_eved != -INFLL)
                {
                    ll cand = max_pre_eved + (r - 2LL * a[r]);
                    maxDelta = max(maxDelta, cand);
                    minDelta = min(minDelta, cand);
                }
            }

            if (r % 2 == 1)
            {
                ll val = r + 2LL * a[r];
                min_pre_odd = min(min_pre_odd, val);
                min_pre_odd = min(min_pre_odd, (ll)r + 2LL * a[r]);
            }
            else
            {
                ll val = -(ll)r + 2LL * a[r];
                max_pre_eved = max(max_pre_eved, val);
            }
        }

        if (maxDelta == LLONG_MIN)
            maxDelta = 0;

        if (minDelta == LLONG_MAX)
            minDelta = 0;

        ll res = max({S, S + maxDelta, S + minDelta});

        cout << res << '\n';
    }
    return 0;
}
