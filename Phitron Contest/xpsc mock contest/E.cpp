#include <bits/stdc++.h>
using namespace std;

int minDifference(vector<int> &coins, int n) {
    long long int totalSum = accumulate(coins.begin(), coins.end(), 0);
    long long int m = n / 2;  
    long long int target = totalSum / 2;

    vector<unordered_set<long long int>> dp(m + 1);
    dp[0].insert(0);  // Base case: 0 coins sum to 0

    for (int coin : coins) {
        for (int i = m; i > 0; i--) {
            for (long long int s : dp[i - 1]) {
                dp[i].insert(s + coin);
            }
        }
    }

    
    long long int bestSum = 0;
    double minDiff = totalSum;

    for (long long int s : dp[m]) {
        double diff = abs(s - target);
        if (diff < minDiff || (diff == minDiff && s > bestSum)) {
            minDiff = diff;
            bestSum = s;
        }
    }

    return abs(totalSum - 2 * bestSum);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> coins(N);
        for (int i = 0; i < N; i++) {
            cin >> coins[i];
        }
        cout << minDifference(coins, N) << '\n';
    }
    return 0;
}