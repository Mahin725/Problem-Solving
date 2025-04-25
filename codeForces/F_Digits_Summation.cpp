/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : F_Digits_Summation.cpp
 * platform: 
 * Date: 26 - 04 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string n, m;
    cin >> n >> m;
    int lastDigitN = n[n.size()-1] - '0';
    int lastDigitM = m[m.size()-1] - '0';
    int sum = lastDigitN + lastDigitM;
    cout << sum << endl;   
    return 0;
}