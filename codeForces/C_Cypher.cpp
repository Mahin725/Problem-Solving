/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem link: https://codeforces.com/problemset/problem/1703/C
 * platform: codeforces , Vjudges XPSC Problemshhet
 * Date: 04 - 04 - 2025
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            int moves;
            string s;
            cin >> moves >> s;
            for (char ch : s) {
                if (ch == 'U') {
                    arr[i] = (arr[i] - 1 + 10) % 10;
                }
                else if (ch == 'D') {
                    arr[i] = (arr[i] + 1) % 10;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
