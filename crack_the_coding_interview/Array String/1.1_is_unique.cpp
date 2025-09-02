// Question: implement an algorithm to determind if a string has all of chars are unique. what if you cannot use additional data structure.
/**
 * Solution approch
 * I will use Unorder_map for counting how much char are avaible
 * then i will loop through all of value if i got any value greter 1 then i return as false. otherway true.
 * let's doo
 */

// Author: Raihanul Islam
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    unordered_map<char, int> hash;
    for (auto ch : s)
    {
        hash[ch]++;
    }
    bool flag = true;
    for (auto element : hash)
    {
        char ch = element.first;
        int cnt = element.second;
        if (cnt != 1)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}