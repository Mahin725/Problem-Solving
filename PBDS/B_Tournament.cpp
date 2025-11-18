
#include <bits/stdc++.h> 
using namespace std;

void solve() {
    int n, j_one_based, k;
    cin >> n >> j_one_based >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int j_strength = a[j_one_based - 1];
    int weaker_or_equal_count = 0;
    int stronger_count = 0;

    for (int i = 0; i < n; ++i) {
        if (i == j_one_based - 1) {
            continue; 
        }
        if (a[i] <= j_strength) {
            weaker_or_equal_count++;
        } else {
            stronger_count++;
        }
    }

    int safe_eliminations = weaker_or_equal_count + (stronger_count / 2);
    
    int required_eliminations = n - k;

    if (safe_eliminations >= required_eliminations) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}