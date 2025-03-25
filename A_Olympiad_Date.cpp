#include <iostream>
#include <vector>
using namespace std;

void solve() {
    vector<int> target = {0, 1, 0, 3, 2, 0, 2, 5};
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> digits(n);
        for (int i = 0; i < n; ++i) {
            cin >> digits[i];
        }
        int ptr = 0; // pointer for target sequence
        int res = 0;
        for (int i = 0; i < n; ++i) {
            if (ptr < target.size() && digits[i] == target[ptr]) {
                ptr++;
                if (ptr == target.size()) {
                    res = i + 1;
                    break;
                }
            }
        }
        if (ptr == target.size()) {
            cout << res << endl;
        } else {
            cout << 0 << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}