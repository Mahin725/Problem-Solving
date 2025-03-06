#include <bits/stdc++.h>
using namespace std;

long long tetranacci(int n) {
    vector<long long> dp(n + 1, 0); 

    if (n >= 1) dp[1] = 1;
    if (n >= 2) dp[2] = 1;
    if (n >= 3) dp[3] = 2;

    for (int i = 4; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4];
    }

    return dp[n];
}

int main() {
    int n;
    cin >> n;
    cout << tetranacci(n) << endl;
    return 0;
}
