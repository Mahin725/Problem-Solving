#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "TactCoa";
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    unordered_map<char, int> freq;
    for (char c : s)
    {
        if (isalpha(c))
            freq[c]++;
    }

    int oddCount = 0;
    for (auto [ch, cnt] : freq)
    {
        if (cnt % 2 != 0)
            oddCount++;
    }

    if (oddCount <= 1)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
