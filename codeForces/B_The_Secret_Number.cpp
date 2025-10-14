#include <bits/stdc++.h>
using namespace std;
#define int long long

int t, n;
int ans[20], cnt;

signed main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        cnt = 0;
        int num = 10;
        while (num + 1 <= n)
        {
            if (n % (num + 1) == 0)
                ans[++cnt] = n / (num + 1);
            num *= 10;
        }
        cout << cnt << endl;
        for (int i = 1; i <= cnt; i++)
            cout << ans[cnt - i + 1] << ' ';
        cout << endl;
    }
    return 0;
}