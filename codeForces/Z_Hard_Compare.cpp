/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : Z_Hard_Compare.cpp
 * platform:
 * Date: 26 - 04 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long double a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b * log(a) > d * log(c))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}