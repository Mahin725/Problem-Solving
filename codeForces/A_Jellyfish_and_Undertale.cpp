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
        int a, b, n;
        cin >> a >> b >> n;

        vector<int> tools(n);
        for (int i = 0; i < n; i++)
            cin >> tools[i];

        long long total = b;

        for (int i = 0; i < n; i++)
        {
            total += min((long long)tools[i] + 1, (long long)a) - 1;
        }

        cout << total << '\n';
    }

    return 0;
}
