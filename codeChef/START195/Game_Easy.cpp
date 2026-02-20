#include <bits/stdc++.h>
using namespace std;

const int INF = -1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        vector<vector<int>> dp(2 * N + 1, vector<int>(N + 1, INF));
        dp[0][0] = 0;

        for (int i = 0; i < N; ++i) {
            vector<vector<int>> ndp = dp;
            for (int c = 0; c <= 2 * N; ++c) {
                for (int x = 0; x <= i; ++x) {
                    if (dp[c][x] == INF) continue;

                   
                    ndp[c][x] = max(ndp[c][x], dp[c][x]);

                    
                    if (c + 1 <= 2 * N)
                        ndp[c + 1][x + 1] = max(ndp[c + 1][x + 1], dp[c][x] + A[i]);

                    if (c + 2 <= 2 * N)
                        ndp[c + 2][x + 1] = max(ndp[c + 2][x + 1], dp[c][x] + A[i] + x);
                }
            }
            dp.swap(ndp);
        }

        for (int k = 1; k <= 2 * N; ++k) {
            int res = INF;
            for (int x = 0; x <= N; ++x) {
                res = max(res, dp[k][x]);
            }
            cout << res << " ";
        }
        cout << '\n';
    }
    return 0;
}