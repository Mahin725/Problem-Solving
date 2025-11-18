#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long A, B;
        cin >> A >> B;
        if (A == 0) {
            cout << "No\n";
        } else if (B == 0) {
            cout << "Yes\n";
        } else if (B % A == 0 && B / A >= 1) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}