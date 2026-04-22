#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            int L = 0, R = 0;

            for (int j = 0; j < i; j++)
            {
                if (p[j] < p[i])
                    L++;
            }
            for (int j = i + 1; j < n; j++)
            {
                if (p[j] > p[i])
                    R++;
            }

            if (L == R)
                cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}