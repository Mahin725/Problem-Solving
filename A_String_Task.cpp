#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string vowels = "aoyeui";

    for(char c : s)
    {
        c = tolower(c);

        if(vowels.find(c) == string::npos)
        {
            cout << "." << c;
        }
    }

    return 0;
}