#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    
    vector<bool> dp(N + 1, false);
    dp[1] = true; 

    for (int i = 1; i <= N; i++) {
        if (dp[i]) {
            if (i + 3 <= N) dp[i + 3] = true;
            if (i * 2 <= N) dp[i * 2] = true;
        }
    }

    cout << (dp[N] ? "YES" : "NO") << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
