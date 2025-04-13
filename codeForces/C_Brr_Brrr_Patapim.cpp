#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> G(n, vector<int>(n));
        map<int, int> sumMap; 

        long long total_sum = 1LL * (2 * n) * (2 * n + 1) / 2; 
        long long known_sum = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> G[i][j];
                int s = (i + 1) + (j + 1); 
                sumMap[s] = G[i][j];     
            }
        }

        vector<int> p(2 * n + 1); 

        for (int s = 2; s <= 2 * n; ++s) {
            p[s] = sumMap[s];
            known_sum += p[s];
        }

        p[1] = total_sum - known_sum;

        for (int i = 1; i <= 2 * n; ++i)
            cout << p[i] << " ";
        cout << "\n";
    }

    return 0;
}
