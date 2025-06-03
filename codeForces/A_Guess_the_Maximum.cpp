#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        int result = INT_MAX;
        for (int i = 0; i < n - 1; ++i) {
            result = min(result, max(a[i], a[i + 1]));
        }

        cout << result - 1 << '\n';
    }

    return 0;
}
