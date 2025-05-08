/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : B_Prefix_Sum_Addicts.cpp
 * platform: 
 * Date: 08 - 05 - 2025
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> s(n + 1, 0);
    for (int i = n - k + 1; i <= n; i++) {
        cin >> s[i];
    }

    if (k == 1) {
        cout << "Yes\n";
        return;
    }

    vector<long long> a(n + 1);
    for (int i = n; i >= n - k + 2; i--) {
        a[i] = s[i] - s[i - 1];
    }

    for (int i = n - k + 2; i < n; i++) {
        if (a[i] > a[i + 1]) {
            cout << "No\n";
            return;
        }
    }

    long long min_first = a[n - k + 2];
    long long total = s[n - k + 1];
    int count = n - k + 1;

    if (min_first * count < total) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
