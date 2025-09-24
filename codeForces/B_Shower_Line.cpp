// Author: Raihanul Islam
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int g[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> g[i][j];
        }
    }

    vector<int> p = {0, 1, 2, 3, 4};
    int ans = 0;

    do
    {
        int happiness = 0;

        happiness += g[p[0]][p[1]] + g[p[1]][p[0]];
        happiness += g[p[2]][p[3]] + g[p[3]][p[2]];

        happiness += g[p[1]][p[2]] + g[p[2]][p[1]];
        happiness += g[p[3]][p[4]] + g[p[4]][p[3]];

        happiness += g[p[2]][p[3]] + g[p[3]][p[2]];

        happiness += g[p[3]][p[4]] + g[p[4]][p[3]];

        ans = max(ans, happiness);
    } while (next_permutation(p.begin(), p.end()));

    cout << ans << "\n";
    return 0;
}
