#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcase;
    cin >> tcase;
    while (tcase--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        for (int i = 0; i < n; i++) 
            cin >> b[i];

        int p_sum = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                p_sum += a[i] - b[i];
            }
        }

        cout << p_sum + 1 << "\n";
    }
    return 0;
}
