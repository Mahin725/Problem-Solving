#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n;
        cin >> n;
        vector<long long> b(n);
        for (int i = 0; i < n; ++i) cin >> b[i];
        
        sort(b.rbegin(), b.rend());           // descending
        
        long long ans = 0;
        for (int k = 1; k <= n; ++k) {
            // ceil( k * b[k-1] / n )
            long long num = k * b[k - 1];
            long long cur = (num + n - 1) / n;
            if (cur > ans) ans = cur;
        }
        cout << ans << '\n';
    }
    return 0;
}