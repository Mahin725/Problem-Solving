#include <bits/stdc++.h>
using namespace std;

void raihanulSolve()
{
    int n;
    cin >> n;
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }
    vector<int> is_fwd(n + 2, 0);
    for (int j = 1; j <= n; j++)
    {
        if (p[j] > j)
        {
            is_fwd[p[j]] = 1;
        }
    }
    vector<int> pref(n + 2, 0);

    for (int k = 1; k <= n; k++)
    {
        pref[k] = pref[k - 1] + is_fwd[k];
    }
    int ans = 0;
    
    for (int m = 1; m <= n + 1; m++)
    {
        int val = (m - 1) - pref[m - 1];
        if (val > ans)
            ans = val;
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        raihanulSolve();
    }
    return 0;
}