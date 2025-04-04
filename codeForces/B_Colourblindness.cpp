/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem link: https://codeforces.com/problemset/problem/1722/B
 * platform: XPSC ProblemSheet from CodeForces submited by Vjudge.net
 * Date: 04 - 04 - 2025
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;cin>>tcase;
    while(tcase--){
        int n;cin>>n;

        string row1, row2;
        cin >> row1 >> row2;

        bool same = true;

        for (int i = 0; i < n; i++) {
            char c1 = row1[i], c2 = row2[i];

        
            if ((c1 == 'R' && c2 != 'R') || (c2 == 'R' && c1 != 'R')) {
                same = false;
                break;
            }
        }

        cout << (same ? "YES" : "NO") << endl;

    }
    return 0;
}