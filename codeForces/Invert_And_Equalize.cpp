#include <bits/stdc++.h>

using namespace std;

int main() {
    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        int n;
        cin >> n;
        string S;
        cin >> S;
        int zeroCount = 0, oneCount = 0;
        if (S[0] == '0') {
            zeroCount++;
        } else {
            oneCount++;
        }
        for (int i = 1; i < n; i++) {
            if (S[i] != S[i - 1]) {
                if (S[i] == '0') zeroCount++;
                else oneCount++;
            }
        }
        cout << min(zeroCount, oneCount) << endl;
    }

}