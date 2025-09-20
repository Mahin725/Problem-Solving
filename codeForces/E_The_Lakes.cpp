#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int dfs(int i, int j, int &n, int &m, vector<vector<int>> &a)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return 0;
    if (a[i][j] == 0)
        return 0;

    int total = a[i][j];
    a[i][j] = 0;
    total += dfs(i + 1, j, n, m, a) + dfs(i - 1, j, n, m, a) +
             dfs(i, j - 1, n, m, a) + dfs(i, j + 1, n, m, a);

    return total;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != 0)
            {
                maxi = max(maxi, dfs(i, j, n, m, a));
            }
        }
    }
    cout << maxi << "\n";
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}