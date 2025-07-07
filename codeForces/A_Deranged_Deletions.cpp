#include <bits/stdc++.h>
using namespace std;

bool is_derangement(vector<int> &a) {
    vector<int> b = a;
    sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        vector<int> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());

        vector<int> deranged = sorted_a;
        rotate(deranged.begin(), deranged.begin() + 1, deranged.end());

        // fix equal positions (optional safety)
        for (int i = 0; i < n; ++i) {
            if (deranged[i] == sorted_a[i]) {
                if (i + 1 < n) swap(deranged[i], deranged[i + 1]);
                else swap(deranged[i], deranged[i - 1]);
            }
        }

        bool valid = true;
        for (int i = 0; i < n; ++i) {
            if (deranged[i] == sorted_a[i]) {
                valid = false;
                break;
            }
        }

        if (valid) {
            cout << "YES\n";
            cout << n << "\n";
            for (int x : deranged) cout << x << " ";
            cout << "\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
