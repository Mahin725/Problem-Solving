#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    
    while (T--) {
        int N, X;
        cin >> N >> X;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; ++i) cin >> A[i];
        for (int i = 0; i < N; ++i) cin >> B[i];

        int currX = X;
        int parryCount = 0;
        bool lost = false;

        for (int i = 0; i < N; ++i) {
            if (currX < A[i]) {
                lost = true;
                break;
            }

            if (currX >= B[i]) {
                int remainingX = currX - 1;
                bool safe = true;
                for (int j = i + 1; j < N; ++j) {
                    if (remainingX < A[j]) {
                        safe = false;
                        break;
                    }
                }

                if (safe) {
                    parryCount++;
                    currX--;
                }
            }
        }

        cout << (lost ? 0 : parryCount) << '\n';
    }

    return 0;
}
