#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSquare(int l1, int b1, int l2, int b2, int l3, int b3) {
    // Try placing l1xb1 and l2xb2 on bottom, l3xb3 on top
    if (b1 == b2 && l1 + l2 == l3 && b1 + b3 == l3)
        return true;
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<pair<int, int>> r(3);
        cin >> r[0].first >> r[0].second;
        cin >> r[1].first >> r[1].second;
        cin >> r[2].first >> r[2].second;

        bool ok = false;

        // Try all permutations
        for (int i = 0; i < 6; i++) {
            if (isSquare(
                r[0].first, r[0].second,
                r[1].first, r[1].second,
                r[2].first, r[2].second
            )) {
                ok = true;
                break;
            }
            next_permutation(r.begin(), r.end());
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
