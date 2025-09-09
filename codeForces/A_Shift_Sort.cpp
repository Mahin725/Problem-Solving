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
        int n;
        string s;
        cin >> n >> s;

        int zers = count(s.begin(), s.end(), '0');

        int mispla = 0;

        for (int i = 0; i < zers; i++)
        {
            if (s[i] == '1')
                mispla++;
        }

        cout << mispla << "\n";
    }
    return 0;
}
