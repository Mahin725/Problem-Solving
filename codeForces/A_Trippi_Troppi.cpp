#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin >> tcase;
    cin.ignore();

    while (tcase--)
    {
        string s;
        getline(cin, s); 

        string news = "";
        if (!s.empty()) news += s[0];

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == ' ' && i + 1 < s.size())
            {
                news += s[i + 1];
            }
        }

        cout << news << endl;
    }
    return 0;
}
