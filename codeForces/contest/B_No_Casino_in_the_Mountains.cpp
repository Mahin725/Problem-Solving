#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) 
            cin >> a[i];

        int ans = 0;
        for (int i = 0; i <= n - k;) {
            bool can_hike = true;
            for (int j = i; j < i + k; ++j) {
                if (a[j] == 1) {
                    can_hike = false;
                    break;
                }
            }
            if (can_hike) {
                ++ans;
                i += k + 1;
            } else {
                ++i;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}