#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int len = m + 1;

        int l_prime = -(m / 2);
        int r_prime = l_prime + m;

        if (l_prime < l) {
            int shift = l - l_prime;
            l_prime += shift;
            r_prime += shift;
        }
        if (r_prime > r) {
            int shift = r_prime - r;
            l_prime -= shift;
            r_prime -= shift;
        }

        cout << l_prime << " " << r_prime << endl;
    }

    return 0;
}
