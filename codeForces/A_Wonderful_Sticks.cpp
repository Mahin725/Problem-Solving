#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> a(n);
    // Fill with 1 to n
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }

    // Reverse segments where we have '<'
    for (int i = 0; i < n - 1;) {
        if (s[i] == '<') {
            int j = i;
            while (j < n - 1 && s[j] == '<') {
                j++;
            }
            // Reverse from i to j
            reverse(a.begin() + i, a.begin() + j + 1);
            i = j;
        } else {
            i++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
