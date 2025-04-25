/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : Q_Coordinates_of_a_Point.cpp
 * platform: 
 * Date: 26 - 04 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double x, y;
    cin >> x >> y;

    if (x == 0 && y == 0) {
        cout << "Origem\n";
    } else if (x == 0) {
        cout << "Eixo Y\n";
    } else if (y == 0) {
        cout << "Eixo X\n";
    } else if (x > 0 && y > 0) {
        cout << "Q1\n";
    } else if (x < 0 && y > 0) {
        cout << "Q2\n";
    } else if (x < 0 && y < 0) {
        cout << "Q3\n";
    } else {
        cout << "Q4\n";
    }
    return 0;
}