// Author: Raihanul Islam
#include <bits/stdc++.h>
using namespace std;

void raihanuldev()
{
    int n;
    cin >> n;
    vector<long long> p(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> p[i];
    }

    long long pds = 0;

    pds += max(0LL, p[0] - 1);

    for (int i = 1; i < n; ++i)
    {
        pds += max(0LL, p[i] - p[i - 1]);
    }

    if (pds == n - 1)
    {
        cout << "yes\n";
    }
    else
    {
        cout << "no\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        raihanuldev();
    }

    return 0;
}