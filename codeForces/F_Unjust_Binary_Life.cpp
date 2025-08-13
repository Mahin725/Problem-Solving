#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    string a, b;
    cin >> a >> b;

    vector<int> pa(n+1,0), pb(n+1,0), pa0(n+1,0), pb0(n+1,0);
    vector<long long> value_y(n);
    vector<pair<long long,int>> sortd_val_y(n);
    vector<long long> pb_sorted(n+1,0), pb0_sorted(n+1,0);

    for (int i=1; i<=n; i++) {
        pa[i] = pa[i-1] + (a[i-1] - '0');
        pa0[i] = i - pa[i];
        pb[i] = pb[i-1] + (b[i-1] - '0');
        pb0[i] = i - pb[i];
    }

    for (int y=1; y<=n; y++) {
        value_y[y-1] = 2LL * pb[y] - y;
    }

    for (int i=0; i<n; i++) sortd_val_y[i] = {value_y[i], i+1};
    sort(sortd_val_y.begin(), sortd_val_y.end());

    for (int i=1; i<=n; i++) {
        int idx = sortd_val_y[i-1].second;
        pb_sorted[i] = pb_sorted[i-1] + pb[idx];
        pb0_sorted[i] = pb0_sorted[i-1] + pb0[idx];
    }

    long long res = 0;
    for (int x=1; x<=n; x++) {
        long long tshould = x - 2LL * pa[x];
        int pos = int(upper_bound(sortd_val_y.begin(), sortd_val_y.end(), make_pair(tshould, n+1)) - sortd_val_y.begin());

        res += 1LL * pa[x] * pos + pb_sorted[pos];

        int remaining = n - pos;
        res += 1LL * pa0[x] * remaining + (pb0_sorted[n] - pb0_sorted[pos]);
    }

    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin >> tcase;
    while (tcase--) solve();
    return 0;
}
