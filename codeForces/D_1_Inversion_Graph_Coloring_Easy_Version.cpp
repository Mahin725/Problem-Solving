// Author: Raihanul Islam
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void raihanuldev()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    dp[0][0] = 1;
    for (int k = 0; k < n; ++k)
    {
        int v = a[k];
        vector<vector<int>> nxt_dp = dp;

        for (int m = 0; m <= n; ++m)
        {
            for (int j = 0; j <= n; ++j)
            {
                if (dp[m][j] > 0)
                {
                    if (j <= v)
                    {
                        int count = dp[m][j];

                        int new_m = max(m, v);
                        int new_j = j;
                        if (m > v)
                        {
                            new_j = max(j, v);
                        }
                        nxt_dp[new_m][new_j] = (nxt_dp[new_m][new_j] + count) % MOD;
                    }
                }
            }
        }
        dp = nxt_dp;
    }

    long long t_gd_sqence = 0;
    for (int m = 0; m <= n; ++m)
    {
        for (int j = 0; j <= n; ++j)
        {
            t_gd_sqence = (t_gd_sqence + dp[m][j]) % MOD;
        }
    }

    cout << t_gd_sqence << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tcase;
    cin >> tcase;

    while (tcase--)
    {
        raihanuldev();
    }

    return 0;
}