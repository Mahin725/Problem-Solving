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
        long long m;
        cin >> n >> m;

        vector<long long> a(n + 1);
        vector<int> b(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i] >> b[i];
        }

        long long prev_time = 0;
        int cur_side = 0;
        long long score = 0;

        for (int i = 1; i <= n; i++)
        {
            long long delta = a[i] - prev_time;
            int parity_needed = cur_side ^ b[i];

            long long r = 0;
            if (delta > 0)
            {
                if (delta % 2 == parity_needed)
                {
                    r = delta;
                }
                else
                {
                    r = delta - 1;
                }
                if (r < 0)
                    r = 0;
            }

            score += r;
            cur_side ^= (r % 2);
            cur_side = b[i];
            prev_time = a[i];
        }

        score += (m - prev_time);

        cout << score << "\n";
    }
}
