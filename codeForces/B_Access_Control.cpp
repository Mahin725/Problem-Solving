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
        int x, n;
        cin >> x >> n;
        string s;
        cin >> s;

        int swipe = 0;
        bool valid = true;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                swipe = x;
            }
            else 
            {
                if (swipe == 0)
                {
                    valid = false;
                    break;
                }
                swipe--;
            }
        }

        if (valid)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
