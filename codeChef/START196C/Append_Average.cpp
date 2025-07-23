#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        long long total_sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total_sum += a[i];
        }

        sort(a.begin(), a.end());
        long long min1 = a[0];
        long long min2 = a[1];
        long long current_m2 = min2;

        for (long long i = 0; i < k; ++i) {
            long long new_val = (min1 + current_m2 + 1) / 2;
            if (new_val >= current_m2) {
                long long remaining_ops = k - i;
                total_sum += remaining_ops * current_m2;
                break;
            }
            total_sum += new_val;
            current_m2 = new_val;
        }

        cout << total_sum << "\n";
    }

    return 0;
}
