#include <bits/stdc++.h>
using namespace std;

char numToChar(int num) {
    return 'a' + num - 1; // 1->a, 2->b, ..., 26->z
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string result = "";
        for (int i = n - 1; i >= 0; ) {
            if (s[i] == '0') {
              
                int num = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
                result += numToChar(num);
                i -= 3;
            } else {
                result += numToChar(s[i] - '0');
                i--;
            }
        }
        reverse(result.begin(), result.end());
        cout << result << '\n';
    }
    return 0;
}
