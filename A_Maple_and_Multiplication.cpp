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
        int a, b;
        cin >> a >> b;
        if (a == b)
            cout << 0 << "\n";

        else if (max(a, b) % min(a, b) == 0)
            cout << 1 << "\n";
        else
            cout << 2 << "\n";
    }
    return 0;
}
