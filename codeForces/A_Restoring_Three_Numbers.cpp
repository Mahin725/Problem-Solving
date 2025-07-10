/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : A_Restoring_Three_Numbers.cpp
 * platform:
 * Date: 10 - 07 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a(4);
    for (int i = 0; i < 4; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << a[3] - a[0] << " " << a[3] - a[1] << " " << a[3] - a[2] << endl;
    return 0;
}