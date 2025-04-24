#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> flag(n);
    for (int i = 0; i < n; ++i) {
        cin >> flag[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            if (flag[i][j] != flag[i][0]) {
                cout << "NO" << endl;
                return 0;
            }
        }

        if (i > 0 && flag[i][0] == flag[i - 1][0]) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}