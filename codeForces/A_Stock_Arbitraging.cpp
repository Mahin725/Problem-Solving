#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, r;
    cin >> n >> m >> r;

    vector<int> buy_prices(n);
    vector<int> sell_prices(m);

    for (int i = 0; i < n; i++) {
        cin >> buy_prices[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> sell_prices[i];
    }

    int min_buy = *min_element(buy_prices.begin(), buy_prices.end());
    int max_sell = *max_element(sell_prices.begin(), sell_prices.end());

    if (max_sell <= min_buy) {
        cout << r << '\n';
    } else {
        int shares = r / min_buy;
        int remaining = r % min_buy;
        int total = shares * max_sell + remaining;
        cout << total << '\n';
    }

    return 0;
}
