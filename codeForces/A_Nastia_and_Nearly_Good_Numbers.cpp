#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A, B;
        cin >> A >> B;

        if (B == 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            long long x = A * B;
            long long y = A * (B + 1);
            long long z = x + y; // A * (2B + 1)
            cout << x << " " << y << " " << z << "\n";
        }
    }
    return 0;
}
