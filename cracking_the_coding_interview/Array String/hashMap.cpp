// Author: Raihanul Islam
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<int, string> hash;
    hash.insert({1, "Raihahn"});
    hash.insert({2, "Raihahn"});
    hash.insert({4, "Raihahn"});

    for (auto element : hash)
    {
        cout << element.first << " " << element.second << endl;
    }
    return 0;
}

// in cpp we use underorder map as hashtable/hasmap.