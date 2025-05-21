#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> army(m + 1);
    for (int i = 0; i <= m; i++) {
        cin >> army[i];
    }

    int fedor = army[m];
    int count = 0;

    for (int i = 0; i < m; i++) {
        int diff = __builtin_popcount(army[i] ^ fedor);
        if (diff <= k) count++;
    }

    cout << count << endl;
    return 0;
}
