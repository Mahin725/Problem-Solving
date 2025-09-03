// Author: Raihanul Islam
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "TactCoa";
    // cin >> s;
    // getline(cin, s);
    sort(s.begin(), s.end());
    bool mainFlag = false;
    do
    {
        // cout << s << endl;
        bool flg = true;

        for (int i = 0, j = s.size() - 1; i < s.size(); i++, j--)
        {
            if (s[i] != s[j])
            {
                flg = false;
            }
        }
        if (flg)
        {
            mainFlag = true;
            break;
        }
    } while (next_permutation(s.begin(), s.end()));
    if (mainFlag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}

// there have an testing issues. i think it should be string input releted issues.