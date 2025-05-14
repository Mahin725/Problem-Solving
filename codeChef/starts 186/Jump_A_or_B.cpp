/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : Jump_A_or_B.cpp
 * platform: 
 * Date: 14 - 05 - 2025
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        long long N, M, A, B;
        cin >> N >> M >> A >> B;
        
        long long totalBJumpDist = B * N - M;
        long long targetDist = B - A;
        
        if (totalBJumpDist < 0 || totalBJumpDist % targetDist != 0) {
            cout << "No\n";
        } else {
            long long x = totalBJumpDist / targetDist;
            if (x >= 0 && x <= N)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}