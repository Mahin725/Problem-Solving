    #include <bits/stdc++.h>
    using namespace std;

    void solve() {
        int n;
        cin >> n;
        vector<long long> a(n), b(n), d(n);
        
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        
        for (int i = 0; i < n; i++) {
            d[i] = a[i] - b[i];
        }
        
        sort(d.begin(), d.end());

        long long count = 0;
        
        for (int i = 0; i < n; i++) {
            int pos = upper_bound(d.begin() + i + 1, d.end(), -d[i]) - d.begin();
            count += (n - pos);
        }

        cout << count << '\n';
    }

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        solve();
        return 0;
    }
