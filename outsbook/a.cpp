#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int freq[26] = {0};

    for (char c : s)
    {
        freq[c - 'a']++;
    }

    for (char c : s)
    {
        if (freq[c - 'a'] == 1)
        {
            cout << c;
            return 0;
        }
    }
    cout << -1<<endl; 
    return 0;
}