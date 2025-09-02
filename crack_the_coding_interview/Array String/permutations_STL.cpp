// Author: Raihanul Islam
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "BCA";
    string another = "ABC";
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
        if (s == another)
        {
            cout << "YES" << endl;
        }
    } while (next_permutation(s.begin(), s.end()));

    return 0;
}