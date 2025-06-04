#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    unordered_map<char, int> freq;
    for (char c : s)
        freq[c]++;

    int odd_count = 0;
    char odd_char = 0;
    for (auto &p : freq) {
        if (p.second % 2 == 1) {
            odd_count++;
            odd_char = p.first;
        }
    }

    if (odd_count > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string first_half = "", middle = "";
    for (char ch = 'A'; ch <= 'Z'; ++ch) {
        int half = freq[ch] / 2;
        first_half += string(half, ch);
    }

    if (odd_count == 1) {
        middle = string(freq[odd_char] % 2, odd_char); 
    }

    string second_half = first_half;
    reverse(second_half.begin(), second_half.end());

    cout << first_half + middle + second_half << "\n";

    return 0;
}
