#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        if (n > m)
        {
            cout << "No" << endl;
            continue;
        }

        vector<int> ans(n + 1);
        int sum = 0;
        if (n % 2 == 0 and m % 2 == 0)
        {
            cout << "Yes" << endl;
            for (int i = 1; i <= n - 2; i++)
            {
                ans[i] = 1;
                sum++;
            }
            ans[n - 1] = (m - sum) / 2;
            ans[n] = ans[n - 1];
        }
        else if (n % 2 == 1 and m % 2 == 0)
        {
            cout << "Yes" << endl;
            for (int i = 1; i <= n - 1; i++)
            {
                ans[i] = 1;
                sum++;
            }
            ans[n] = m - sum;
        }
        else if (n % 2 == 0 and m % 2 == 1)
        {
            cout << "No";
            continue;
        }
        else if (n % 2 == 1 and m % 2 == 1)
        {
            cout << "Yes" << endl;
            for (int i = 1; i <= n - 1; i++)
            {
                ans[i] = 1;
                sum++;
            }
            ans[n] = m - sum;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}