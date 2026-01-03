#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x;
    cin >> x;

    if (x == 0) {
        cout << 0;
        return 0;
    }

    long long result = (500 + x - 1) / x;
    cout << result;

    return 0;
}
