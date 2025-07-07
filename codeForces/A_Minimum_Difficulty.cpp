#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min_difficulty = INT_MAX;

    for (int i = 1; i < n - 1; i++) {
        int max_diff = 0;
        for (int j = 1; j < n; j++) {
            if (j == i) continue;
            int prev = (j - 1 == i) ? a[j - 2] : a[j - 1];
            max_diff = max(max_diff, a[j] - prev);
        }
        min_difficulty = min(min_difficulty, max_diff);
    }

    cout << min_difficulty << endl;
    return 0;
}
