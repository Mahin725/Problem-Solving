#include <bits/stdc++.h>
using namespace std;

// Dummy isSubstring function
bool isSubstring(const string &s1, const string &s2)
{
    return s1.find(s2) != string::npos;
}

// Function to check rotation
bool isRotation(const string &s1, const string &s2)
{
    if (s1.size() != s2.size() || s1.empty())
        return false;

    string combined = s1 + s1;
    // Only ONE call to isSubstring
    return isSubstring(combined, s2);
}

int main()
{
    string s1 = "waterbottle";
    string s2 = "erbottlewat";

    if (isRotation(s1, s2))
    {
        cout << s2 << " is a rotation of " << s1 << endl;
    }
    else
    {
        cout << s2 << " is NOT a rotation of " << s1 << endl;
    }

    return 0;
}
