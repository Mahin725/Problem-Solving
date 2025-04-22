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
        int a, b, c;
        cin >> a >> b >> c;
        int time1 = abs(a - 1);
        int time2 = abs(b - c) + abs(c - 1);

        if (time1 < time2)
            cout << "1\n";
        if (time1 > time2)
        {
            cout << "2\n";
        }
        if (time1 == time2)
            cout << "3\n";
    }
    return 0;
}