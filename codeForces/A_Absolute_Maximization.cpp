#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long t;
    cin >> t;

    while (t--) {
        long n;
        cin >> n;

        bool a[11] = {0}, z[11] = {0};

        for (long p = 0; p < n; ++p) {
            long x;
            cin >> x;

            for (int u = 0; u <= 10; ++u) {
                if (x % 2 == 1) a[u] = true;
                else z[u] = true;
                x /= 2;
            }
        }

        long res = 0, mult = 1;
        for (int u = 0; u <= 10; ++u) {
            res += mult * a[u] * z[u];
            mult *= 2;
        }

        cout << res << '\n';
    }

    return 0;
}
    