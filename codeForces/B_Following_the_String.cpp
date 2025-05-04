#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        string res = "";
        vector<char> letters;
        for (char c = 'a'; c <= 'z'; c++) letters.push_back(c);

        map<char, int> freq;
        int next_letter_idx = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                while (freq.count(letters[next_letter_idx])) {
                    next_letter_idx++;
                }
                char ch = letters[next_letter_idx];
                res += ch;
                freq[ch] = 1;
            } else {
                for (auto &p : freq) {
                    if (p.second == a[i]) {
                        res += p.first;
                        freq[p.first]++;
                        break;
                    }
                }
            }
        }

        cout << res << '\n';
    }

    return 0;
}
