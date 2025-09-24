// Author: Raihanul Islam
#include <bits/stdc++.h>
using namespace std;

void raihanuldev()
{
    string x;
    cin >> x;
    int n = x.size();

    int pos = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        int d1 = x[i] - '0';
        int d2 = x[i + 1] - '0';
        if (d1 + d2 >= 10)
        {
            pos = i;
            break;
        }
    }

    if (pos != -1)
    {
        int d1 = x[pos] - '0';
        int d2 = x[pos + 1] - '0';
        int sum = d1 + d2;
        cout << x.substr(0, pos) << sum << x.substr(pos + 2) << "\n";
    }
    else
    {
        int d1 = x[0] - '0';
        int d2 = x[1] - '0';
        int sum = d1 + d2;
        cout << sum << x.substr(2) << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        raihanuldev();
    }
    return 0;
}
