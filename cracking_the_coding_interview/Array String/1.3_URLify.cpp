// Author: Raihanul Islam

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            cout << "%20";
        }
        else
        {
            cout << s[i];
        }
    }
    return 0;
}