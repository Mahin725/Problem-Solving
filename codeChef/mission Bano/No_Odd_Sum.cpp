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

        int ones = 0, twos = 0;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            if (a == 1) ones++;
            else twos++;
        }

        int ops_to_all_ones = twos;
        int ops_to_all_twos = 1e9;

        if (ones % 2 == 0) {
            ops_to_all_twos = ones / 2;
        } else if (twos >= 1) {
            ops_to_all_twos = (ones + 1) / 2 + 1; 
        }

        cout << min(ops_to_all_ones, ops_to_all_twos) << '\n';
    }

    return 0;
}
