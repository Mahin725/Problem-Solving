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
        int x, y, z;
        cin >> x >> y >> z;

        if (y == 0)
        {
            if (abs(x - z) > 1)
                cout << "No\n";
            else
                cout << "Yes\n";
        }
        else
        {
            if (x > 0 && z > 0)
                cout << "Yes\n";
            else if (x == 0 && z == 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}
