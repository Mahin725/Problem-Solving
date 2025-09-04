#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    for (int k = 1; k < n; k++)
    {
        int l1 = 0, o1 = 0, l2 = 0, o2 = 0;

        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'L')
                l1++;
            else
                o1++;
        }

        for (int i = k; i < n; i++)
        {
            if (s[i] == 'L')
                l2++;
            else
                o2++;
        }

        if (l1 != l2 && o1 != o2)
        {
            cout << k << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";
    return 0;
}
