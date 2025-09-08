#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        set<int> digits;
        int temp = x;
        while (temp) {
            digits.insert(temp % 10);
            temp /= 10;
        }
        int y = 0;
        while (true) {
            int y_temp = y;
            if (digits.count(y_temp)) {
                cout << y << '\n';
                break;
            }
            y++;
        }
    }
    return 0;
}