#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string b;
        cin >> b;

        set<char> unique_chars(b.begin(), b.end());
        string r(unique_chars.begin(), unique_chars.end());

        unordered_map<char, char> decode_map;
        int len = r.size();
        for (int i = 0; i < len; i++) {
            decode_map[r[i]] = r[len - i - 1];
        }

        string original;
        for (char ch : b) {
            original += decode_map[ch];
        }

        cout << original << '\n';
    }

    return 0;
}
