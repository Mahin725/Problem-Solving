#include <bits/stdc++.h>
using namespace std;
#define int long long

int countSubsequences(string &s, string &t) {
    int n = s.size();
    int m = t.size();
    
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 0; i <= n; i++) dp[i][0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i - 1] == t[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    
    return dp[n][m];
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        string s, t;
        cin >> s >> t;

        cout << countSubsequences(s, t) << "\n";
    }

    return 0;
}
