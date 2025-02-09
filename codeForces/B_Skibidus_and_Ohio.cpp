#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int len = s.size();

        int removeCount = 0;
        for (int i = 0; i < len - 1; i++) {
            if (s[i] == s[i + 1]) {
                removeCount++;
            }
        }
        cout << (len - removeCount) << endl;
    }
    return 0;
}
