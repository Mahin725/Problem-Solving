// Author: Raihanul Islam Sharif
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<string> s(n), t(m);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int j = 0; j < m; j++)
        cin >> t[j];

    int q;
    cin >> q;
    while (q--)
    {
        long long y;
        cin >> y;
        string yearName = s[(y - 1) % n] + t[(y - 1) % m];
        cout << yearName << "\n";
    }

    return 0;
}
