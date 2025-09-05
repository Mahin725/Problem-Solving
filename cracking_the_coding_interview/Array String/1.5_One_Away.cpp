#include <bits/stdc++.h>
using namespace std;

bool oneEditReplace(string s1, string s2)
{
    bool foundDiff = false;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            if (foundDiff)
                return false;
            foundDiff = true;
        }
    }
    return true;
}

bool oneEditInsert(string s1, string s2)
{
    int i = 0, j = 0;
    bool foundDiff = false;
    while (i < s1.size() && j < s2.size())
    {
        if (s1[i] != s2[j])
        {
            if (foundDiff)
                return false;
            foundDiff = true;
            j++; // বড় string-এর pointer এগাবে
        }
        else
        {
            i++;
            j++;
        }
    }
    return true;
}

bool oneAway(string s1, string s2)
{
    if (s1.size() == s2.size())
    {
        return oneEditReplace(s1, s2);
    }
    else if (s1.size() + 1 == s2.size())
    {
        return oneEditInsert(s1, s2); // s2 বড়
    }
    else if (s1.size() - 1 == s2.size())
    {
        return oneEditInsert(s2, s1); // s1 বড়
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    if (oneAway(a, b))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
