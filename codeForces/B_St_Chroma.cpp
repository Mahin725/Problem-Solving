#include <iostream>
using namespace std;

void solve(int n, int x) {
    for (int i = x - 1; i >= 0; i--)
        cout << i << " ";
    for (int i = n - 1; i >= x; i--)
        cout << i << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        solve(n, x);
    }
    return 0;
}
