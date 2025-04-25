/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : P_First_digit.cpp
 * platform: 
 * Date: 26 - 04 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int number;
    cin>>number;
    string s = to_string(number);
    int firstDigit = s[0] - '0';
    if (firstDigit % 2 == 0) cout << "EVEN\n";
    else cout << "ODD\n";
    return 0;
}