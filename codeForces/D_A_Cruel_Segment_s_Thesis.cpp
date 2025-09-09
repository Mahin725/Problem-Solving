#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int64, int64>> seg(n);
        for (int i = 0; i < n; ++i)
            cin >> seg[i].first >> seg[i].second; // l, r
        int64 sum_orig = 0;
        for (int i = 0; i < n; ++i)
            sum_orig += (seg[i].second - seg[i].first);

        // sort by s = l + r, tie-break by smaller l
        vector<int> idx(n);
        iota(idx.begin(), idx.end(), 0);
        sort(idx.begin(), idx.end(), [&](int a, int b)
             {
                 long long sa = seg[a].first + seg[a].second;
                 long long sb = seg[b].first + seg[b].second;
                 if (sa != sb)
                     return sa < sb;
                 return seg[a].first < seg[b].first; // tie-break
             });

        int m = n / 2;
        long long extra = 0;
        for (int k = 0; k < m; ++k)
        {
            int i = idx[k];
            int j = idx[n - 1 - k];
            // since s_i <= s_j by sorting, best pair value is r_j - l_i
            extra += seg[j].second - seg[i].first;
        }

        cout << (sum_orig + extra) << '\n';
    }
    return 0;
}
