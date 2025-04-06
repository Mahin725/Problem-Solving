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
        vector<vector<int>> seq(n, vector<int>(n - 1));

        map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n - 1; ++j) {
                cin >> seq[i][j];
            }
            freq[seq[i][0]]++;
        }

        int firstElement;
        for (auto &[val, count] : freq) {
            if (count == n - 1) {
                firstElement = val;
                break;
            }
        }

        vector<int> result;
        result.push_back(firstElement);

        for (int i = 0; i < n; ++i) {
            if (seq[i][0] != firstElement) {
                for (int j = 0; j < n - 1; ++j) {
                    result.push_back(seq[i][j]);
                }
                break;
            }
        }

        for (int x : result) cout << x << " ";
        cout << '\n';
    }

    return 0;
}
