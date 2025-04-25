/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : S_Interval.cpp
 * platform: 
 * Date: 26 - 04 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double x;
    cin >> x;
    if (x >= 0 && x <= 25) {
        cout << "Interval [0,25]" << '\n';
    }
    else if (x > 25 && x <= 50) {
        cout << "Interval (25,50]" << '\n';
    }
    else if (x > 50 && x <= 75) {
        cout << "Interval (50,75]" << '\n';
    }
    else if (x > 75 && x <= 100) {
        cout << "Interval (75,100]" << '\n';
    }
    else {
        cout << "Out of Intervals" << '\n';
    }
    return 0;
}