#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<int> a(n); 
        vector<int> h(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> h[i];

        int max_len = 0;
        int left = 0;
        long long sum = 0;

        for (int right = 0; right < n; right++) {
            if (right > 0 && h[right - 1] % h[right] != 0) {
                left = right;
                sum = 0;
            }

            sum += a[right];

            while (sum > k) {
                sum -= a[left];
                left++;
            }

            max_len = max(max_len, right - left + 1);
        }

        cout << max_len << "\n";
    }

    return 0;
}
