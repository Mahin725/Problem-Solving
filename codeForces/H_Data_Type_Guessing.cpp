/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : H_Data_Type_Guessing.cpp
 * platform: 
 * Date: 26 - 04 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long double n, k, a;
    cin >> n >> k >> a;
    
    long double result = (n * k) / a;
    long double intPart;
    
    if (result > 2147483647) {
        cout << "long long\n";
    }
    else if (modf(result, &intPart) == 0.0) {
        cout << "int\n";
    }
    else {
        cout << "double\n";
    }
    return 0;
}