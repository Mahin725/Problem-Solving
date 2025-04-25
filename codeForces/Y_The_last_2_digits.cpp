/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : Y_The_last_2_digits.cpp
 * platform: 
 * Date: 26 - 04 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    long long product = (1LL * a * b * c * d) % 100;
    if (product < 10) cout << "0";
    cout << product << endl;
    return 0;
}