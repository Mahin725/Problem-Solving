/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : E_Interval_Sweep.cpp
 * platform: 
 * Date: 26 - 04 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    if (abs(a - b) <= 1 && (a > 0 || b > 0))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}