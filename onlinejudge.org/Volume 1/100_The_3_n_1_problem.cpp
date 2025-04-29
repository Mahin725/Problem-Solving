/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : 100_The_3_n_1_problem.cpp
 * platform: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=36
 * Date: 29 - 04 - 2025
 */


#include <bits/stdc++.h>
using namespace std;

int cycleLength(int n) {
    int count = 1;
    while (n != 1) {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        count++;
    }
    return count;
}

int main() {
    int i, j;
    while (cin >> i >> j) {
        int a = min(i, j);
        int b = max(i, j);
        int maxCycle = 0;

        for (int n = a; n <= b; ++n) {
            maxCycle = max(maxCycle, cycleLength(n));
        }

        cout << i << " " << j << " " << maxCycle << "\n";
    }
    return 0;
}
