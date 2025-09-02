/**
 * author: raihanul islam sharif
 * Question: given two string. write a program to decide if one is a permuations of other.
 * Solutions apporch:
 *  in the question we need to solve an problem,given one string is permutation of another string.
 * in c++ we can easyliy check it by useing STL next_permutaions();
 * string must be sorted at frist.
 * lets'do
 * */

// Author: Raihanul Islam
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, another;
    cin >> s >> another;
    //  sort frist string which will play for permutations
    sort(s.begin(), s.end());
    bool flag = false;
    do
    {
        // cout << s << endl;
        if (s == another)
        {
            flag = true;
        }
    } while (next_permutation(s.begin(), s.end()));
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    };
    return 0;
}
