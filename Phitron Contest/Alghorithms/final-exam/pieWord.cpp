#include <bits/stdc++.h>
using namespace std;

void checkPileOfWord(string s1, string s2) {
    if (s1.length() != s2.length()) {
        cout << "NO\n";
        return;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S1, S2;
        cin >> S1 >> S2;
        checkPileOfWord(S1, S2);
    }
    return 0;
}
