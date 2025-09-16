#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        long long n, s;
        cin >> n >> s;
        long long sum = n * (n + 1) / 2;
        if (s > sum)
        {
            cout << -1 << "\n";
            continue;
        }
        vector<int> ans;
        for (long long i = n; i >= 1 && s > 0; i--)
        {
            if (s >= i)
            {
                ans.push_back((int)i);
                s -= i;
            }
        }
        if (s != 0)
            cout << -1 << "\n";
        else
        {
            for (size_t i = 0; i < ans.size(); i++)
            {
                if (i)
                    cout << ' ';
                cout << ans[i];
            }
            cout << "\n";
        }
    }
    return 0;
}
