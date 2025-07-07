/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : A_Maximum_in_Table.cpp
 * platform: 
 * Date: 08 - 07 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[11][11];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || j == 1)
                a[i][j] = 1;
            else
                a[i][j] = a[i-1][j] + a[i][j-1];
        }
    }

    cout << a[n][n] << endl; 

    return 0;
}
