/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : A_Playing_with_Dice.cpp
 * platform: 
 * Date: 08 - 07 - 2025
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int winA = 0, draw = 0, winB = 0;

    for (int x = 1; x <= 6; x++) {
        int diffA = abs(a - x);
        int diffB = abs(b - x);

        if (diffA < diffB)
            winA++;
        else if (diffA == diffB)
            draw++;
        else
            winB++;
    }

    cout << winA << " " << draw << " " << winB << endl;
    return 0;
}
