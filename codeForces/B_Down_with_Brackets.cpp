#include <bits/stdc++.h>
using namespace std;

bool isFullyNested(const string &s)
{
    int n = s.size();
    if (s[0] != '(' || s[n - 1] != ')')
        return false;

    int balance = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '(')
            balance++;
        else
            balance--;
        if (balance == 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();

        if (n == 2)
        {
            cout << "NO\n";
        }
        else if (isFullyNested(s))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
