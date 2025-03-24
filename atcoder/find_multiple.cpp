// Problem Link: https://atcoder.jp/contests/abc220/submissions/64169969
// Author: Raihanul islam Sharif
// username: raihanuldev
// Date: 25 March 2025
// judge : Atcoder 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;


    int first_multiple = ((A + C - 1) / C) * C;

    if (first_multiple <= B) {
        cout << first_multiple << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
