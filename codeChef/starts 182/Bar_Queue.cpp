#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int boys = 0, girls = 0;
        int ans = 0;

        for (int i = 0; i < n; ++i) {
            if (s[i] == 'B') {
                if ((boys + 1) > 2 * girls) break;
                boys++;
            } else {
                girls++;
            }
            ans++;
        }
        cout << ans << endl;
    }
}
