#include <bits/stdc++.h>
using namespace std;

struct LinearBasis {
    long long basis[31];

    LinearBasis() {
        memset(basis, 0, sizeof(basis));
    }

    void insert(long long x) {
        for (int i = 30; i >= 0; i--) {
            if (!(x & (1LL << i))) continue;

            if (!basis[i]) {
                basis[i] = x;
                return;
            }
            x ^= basis[i];
        }
    }

    long long minimize(long long x) {
        for (int i = 30; i >= 0; i--) {
            if (basis[i])
                x = min(x, x ^ basis[i]);
        }
        return x;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, P;
        cin >> N >> P;
        P--; // 0-index

        vector<long long> A(N);
        for (auto &x : A) cin >> x;

        LinearBasis lb;

        // insert ALL elements
        for (auto x : A) {
            lb.insert(x);
        }

        cout << lb.minimize(A[P]) << "\n";
    }
}