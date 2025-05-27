#include <iostream>
#include <vector>
using namespace std;

void solve() {
    long long x;
    cin >> x;

    vector<int> res(31, 0);

    for (int i = 0; i < 30; i++) {
        if ((x >> i) & 1) {
            if (res[i] == 1) {
                res[i] = 0;
                res[i + 1] = 1;
            } else if (i > 0 && res[i - 1] == 1) {
                res[i - 1] = -1;
                res[i + 1] = 1;
            } else {
                res[i] = 1;
            }
        }
    }

    cout << 31 << "\n";
    for (int i = 0; i <= 30; i++) {
        cout << res[i] << " ";
    }
    cout << "\n";
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
