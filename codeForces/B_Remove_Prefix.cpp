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

        set<int> seen;
        int idx = n - 1;

        while (idx >= 0 && !seen.count(a[idx])) {
            seen.insert(a[idx]);
            idx--;
        }

        cout << idx + 1 << '\n'; 
    }

    return 0;
}
