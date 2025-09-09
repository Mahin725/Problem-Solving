#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long m;
        cin >> n >> m;
        vector<long long> a(n);
        long long sum = 0, mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            mx = max(mx, a[i]);
        }

        if (m == 1)
        {
            // Can only collect once → best oven
            cout << mx << "\n";
        }
        else if (m == 2)
        {
            // Collect from best non-mx once, then mx after 2 sec
            long long second_best = 0;
            for (auto v : a)
            {
                if (v != mx)
                    second_best = max(second_best, v);
            }
            // Special case: all ovens same rate → just pick twice from mx
            if (second_best == 0)
                second_best = mx;

            cout << 2 * mx + second_best - mx << "\n";
            // Equivalent to: mx*2 + best_other
        }
        else
        {
            // General case
            cout << (m - 1) * sum + mx << "\n";
        }
    }
    return 0;
}
