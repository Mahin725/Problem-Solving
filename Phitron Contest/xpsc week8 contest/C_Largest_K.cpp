#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long X, Y;
        cin >> X >> Y;

        if (X == 1) {
            cout << Y << '\n';
        } else {
            cout << Y / (X - 1) << '\n';
        }
    }

    return 0;
}
