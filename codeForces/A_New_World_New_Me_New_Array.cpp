#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    int n, k, p;
    cin >> n >> k >> p;
    if (abs(k) > n * p) {
        cout << -1 << endl;
        return;
    }

    int min_operations = (abs(k) + p - 1) / p;
    cout << min_operations << endl;
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        solve();
    }
    return 0;
}
