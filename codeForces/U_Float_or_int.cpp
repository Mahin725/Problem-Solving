/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : U_Float_or_int.cpp
 * platform: 
 * Date: 26 - 04 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double N;
    cin >> N;
    
    int intPart = (int)N;
    double decimalPart = N - intPart;
    
    if (decimalPart == 0) {
        cout << "int " << intPart << '\n';
    } else {
        cout << "float " << intPart << " " << fixed << setprecision(3) << decimalPart << '\n';
    }
    return 0;
}