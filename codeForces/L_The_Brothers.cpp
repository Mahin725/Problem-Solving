/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : L_The_Brothers.cpp
 * platform: 
 * Date: 26 - 04 - 2025
 */

 #include <bits/stdc++.h>
 using namespace std;
 
 int main()
 {
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
    string f1, s1, f2, s2;
    cin >> f1 >> s1;
    cin >> f2 >> s2;

    if (s1 == s2) {
        cout << "ARE Brothers\n";
    } else {
        cout << "NOT\n";
    }
     return 0;
 }