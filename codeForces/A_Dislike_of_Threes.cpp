#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;

        int count = 0;
        int n = 0;

        while (count < k) {
            n++;
            if (n % 3 == 0 || n % 10 == 3) continue;
            count++;
        }

        cout << n << "\n";
    }
    return 0;
}
