#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        long long x;
        cin >> x;
        int d = to_string(x).size();
        int k = d + 1;
        long long tenk = 1;
        for (int i = 0; i < k; ++i)
            tenk *= 10LL;

        long long m = tenk - 1;

        long long y = m - x;
        cout << y << '\n';
    }
    return 0;
}
