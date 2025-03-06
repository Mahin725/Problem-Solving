#include <bits/stdc++.h>
using namespace std;

int values[1005], weights[1005];
int dp[1005][1005];

// timecomlxity - O(N * W)
int solve(int i, int capacity) {
    if (i < 0 || capacity < 0) return 0;
    if (dp[i][capacity] != -1) return dp[i][capacity];

    if (weights[i] <= capacity) {
        int take = solve(i - 1, capacity - weights[i]) + values[i];
        int not_take = solve(i - 1, capacity);
        dp[i][capacity] = max(take, not_take);
    } else {
        dp[i][capacity] = solve(i - 1, capacity);
    }
    
    return dp[i][capacity];
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, capacity;
        cin >> n >> capacity;

        for (int i = 0; i < n; i++) cin >> weights[i];
        for (int i = 0; i < n; i++) cin >> values[i];

        memset(dp, -1, sizeof(dp));

        cout << solve(n - 1, capacity) << endl;
    }
    
    return 0;
}
