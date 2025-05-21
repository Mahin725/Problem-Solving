#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.size();
    int index = 0;

    for (int i = 1; i < len; ++i) {
        index += (1 << i); // 2^i
    }

    for (int i = 0; i < len; ++i) {
        if (s[i] == '7') {
            index += (1 << (len - i - 1));
        }
    }

    cout << index + 1 << endl;

    return 0;
}
