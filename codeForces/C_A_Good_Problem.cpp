#include <bits/stdc++.h>
using namespace std;


int get_msb_pos(unsigned long long n) {
    if (n == 0) return -1;
    return 63 - __builtin_clzll(n);
}

void raihanuldev() {
    long long n_ll, l_ll, r_ll, k_ll;
    cin >> n_ll >> l_ll >> r_ll >> k_ll;

    unsigned long long n = n_ll;
    unsigned long long l = l_ll;
    unsigned long long r = r_ll;
    unsigned long long k = k_ll;

    if (n % 2 != 0) {
        cout << l << endl;
    } else {
        if (n == 2) {
            cout << -1 << endl;
            return;
        }
        int msb_pos = get_msb_pos(l);
        unsigned long long m_val = 1ULL << (msb_pos + 1);

        if (m_val > r) {
            cout << -1 << endl;
        } else {
            if (k <= n - 2) {
                cout << l << endl;
            } else {
                cout << m_val << endl;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        raihanuldev();
    }

    return 0;
}