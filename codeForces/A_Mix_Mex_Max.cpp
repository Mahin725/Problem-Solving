#include <bits/stdc++.h>

using namespace std;

void raihanuldev() {
    int n;
    cin >> n;
    vector<int> a(n);
    bool haszero = false;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 0) {
            haszero = true;
        }
    }

    if (haszero) {
        cout << "NO\n";
        return;
    }

    int target_val = -1; 

    for (int val : a) {
        if (val != -1) {
            target_val = val;
            break;
        }
    }

    if (target_val == -1) {
        cout << "YES\n";
        return;
    }

    for (int val : a) {
        if (val != -1 && val != target_val) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tcase;
    cin >> tcase;
    while (tcase--) {
        raihanuldev();
    }

    return 0;
}