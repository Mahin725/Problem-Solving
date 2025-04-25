/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : C_Assembly_via_Minimums.cpp
 * platform: 
 * Date: 25
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int size = n * (n - 1) / 2;
        vector<int> b(size);
        for (int i = 0; i < size; i++) {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        vector<int> a;
        int remaining = n - 1;  
        for (int i = 0, j = 0; j < n - 1; j++) {
            a.push_back(b[i]);
            i += remaining;
            remaining--;
        }

        a.push_back(1e9);

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
