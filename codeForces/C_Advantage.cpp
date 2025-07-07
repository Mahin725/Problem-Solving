#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> s(n);
        int max1 = 0, max2 = 0;

        for (int i = 0; i < n; i++) {
            cin >> s[i];
            if (s[i] > max1) {
                max2 = max1;
                max1 = s[i];
            } else if (s[i] > max2) {
                max2 = s[i];
            }
        }

        for (int i = 0; i < n; i++) {
            if (s[i] == max1) {
                cout << s[i] - max2 << " ";
            } else {
                cout << s[i] - max1 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
