// Author: Raihanul Islam
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a = {4, 5, 1, 2, 7, 3};
    sort(a.begin(), a.end());
    for (auto value : a)
    {
        cout << value << ",";
    }
    return 0;
}