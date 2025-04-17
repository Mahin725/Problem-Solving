#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<string> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        long long ans = 0;
        unordered_map<string, int> freq;

        for (string s : arr) {
            for (int i = 0; i < 2; ++i) {
                char original = s[i];
                for (char ch = 'a'; ch <= 'k'; ++ch) {
                    if (ch != original) {
                        s[i] = ch;
                        ans += freq[s];
                    }
                }
                s[i] = original;
            }
            freq[s]++;
        }

        cout << ans << "\n";
    }

    return 0;
}
