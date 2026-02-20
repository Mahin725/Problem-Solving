#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll calc_min(ll a, ll b) {
    return min(a, b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    
    while (T--) {
        int N, Q;
        cin >> N >> Q;

        vector<ll> A(N + 2);
        for (int i = 1; i <= N; ++i) {
            cin >> A[i];
        }

        ll score = 0;
        for (int i = 1; i < N; ++i) {
            score += calc_min(A[i], A[i + 1]);
        }

        while (Q--) {
            int idx;
            ll x;
            cin >> idx >> x;

            if (idx > 1) score -= calc_min(A[idx - 1], A[idx]);
            if (idx < N) score -= calc_min(A[idx], A[idx + 1]);

            A[idx] = x;

            if (idx > 1) score += calc_min(A[idx - 1], A[idx]);
            if (idx < N) score += calc_min(A[idx], A[idx + 1]);

            cout << score << "\n";
        }
    }

    return 0;
}
