// Problem statment; write an method for compress an string to lenght.
/**
 * for example;
 * aabccc
 * ans => a2b1c3
 * if  new string don't big than origian string then return original string
 *
 */

// Author: Raihanul Islam
#include <bits/stdc++.h>
using namespace std;

string StringCompression(string str)
{
    // beside code line i added time complexity and space complexity
    string result; // O(1) time complexity and space bigO(n)
    int count = 0;

    for (int i = 0; i < str.size(); i++) // o(n)
    {
        count++;
        if (i + 1 == str.size() || str[i] != str[i + 1])
        {
            result += str[i] + to_string(count);
            count = 0;
        }
    }
    if (result.size() < str.size())
    {
        return result;
    }
    else
    {
        return str;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    string ans = StringCompression(s);
    cout << ans << endl;
    return 0;
}

// okey Problem are solve now we will calcaulete time compelxtity for this problem stametnt.

/**
 * in this problem overall time complexity are bigO(n);
 *
 *
 */