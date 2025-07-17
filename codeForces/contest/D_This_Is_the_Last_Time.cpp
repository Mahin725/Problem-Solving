#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> l(n), r(n), real(n);

        for (int i = 0; i < n; ++i) {
            cin >> l[i] >> r[i] >> real[i];
        }

        vector<int> idx(n);
        for (int i = 0; i < n; ++i) idx[i] = i;
        sort(idx.begin(), idx.end(), [&](int a, int b) {
            return l[a] < l[b];
        });

        int max_coins = k;
        int cur = k;
        int i = 0;

        priority_queue<pair<int, int>> pq;

        while (true) {
            while (i < n && l[idx[i]] <= cur) {
                if (r[idx[i]] >= cur) {
                    pq.push({real[idx[i]], idx[i]});
                }
                i++;
            }
            if (pq.empty()) break;

            pair<int, int> top = pq.top();
            pq.pop();
            cur = top.first;
            max_coins = max(max_coins, cur);
        }

        cout << max_coins << '\n';
    }

    return 0;
}
