#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;
        int i = 0, j = 0;
        bool valid = true;
        while (i < p.size() && j < s.size()) {
            if (s[j] != p[i]) {
                valid = false;
                break;
            }
            char current_p = p[i];
            int possible_k = 1;
            if (j + 1 < s.size() && s[j + 1] == current_p) {
                possible_k = 2;
            }
            bool found = false;
            for (int k = possible_k; k >= 1; --k) {
                int rem_p = p.size() - i - 1;
                int rem_s = s.size() - j - k;
                if (rem_s >= rem_p && rem_s <= 2 * rem_p) {
                    i++;
                    j += k;
                    found = true;
                    break;
                }
            }
            if (!found) {
                valid = false;
                break;
            }
        }
        if (valid && i == p.size() && j == s.size()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}