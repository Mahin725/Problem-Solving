#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    // Target date: 01032025
    map<int, int> targetFreq;
    string target = "01032025";
    for (char c : target) {
        targetFreq[c - '0']++;
    }

    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        map<int, int> currentFreq;
        int result = 0;

        for (int i = 0; i < n; i++) {
            currentFreq[a[i]]++;

            bool ok = true;
            for (auto [digit, count] : targetFreq) {
                if (currentFreq[digit] < count) {
                    ok = false;
                    break;
                }
            }

            if (ok) {
                result = i + 1; // 1-based index
                break;
            }
        }

        cout << result << '\n';
    }

    return 0;
}
