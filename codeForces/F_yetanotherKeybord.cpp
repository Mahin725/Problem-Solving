#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        vector<pair<int, char>> small, capital;

        for (int i = 0; i < s.size(); ++i) {
            char ch = s[i];

            if (ch == 'b') {
                if (!small.empty()) small.pop_back();
            }
            else if (ch == 'B') {
                if (!capital.empty()) capital.pop_back();
            }
            else if (islower(ch)) {
                small.push_back({i, ch});
            }
            else if (isupper(ch)) {
                capital.push_back({i, ch});
            }
        }

        // Merge two vectors
        vector<pair<int, char>> result;
        result.insert(result.end(), small.begin(), small.end());
        result.insert(result.end(), capital.begin(), capital.end());

        // Sort by index
        sort(result.begin(), result.end());

        for (auto [idx, ch] : result) cout << ch;
        cout << '\n';
    }

    return 0;
}
