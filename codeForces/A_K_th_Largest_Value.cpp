#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    int countOnes = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) countOnes++;
    }

    while (q--) {
        int t, x;
        cin >> t >> x;

        if (t == 1) {
           
            x--;
            if (a[x] == 1) {
                a[x] = 0;
                countOnes--;
            } else {
                a[x] = 1;
                countOnes++;
            }
        } else if (t == 2) {
            if (x <= countOnes) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}
