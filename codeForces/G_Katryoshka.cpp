/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : G_Katryoshka.cpp
 * platform: 
 * Date: 26 - 04 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m, k;
    cin >> n >> m >> k;
    long long ans = 0;
    long long min_pieces = min({n/2, k});
    ans += min_pieces;
    n -= 2 * min_pieces;
    k -= min_pieces;

    min_pieces = min({n, m, k});
    ans += min_pieces;

    cout << ans << "\n";
    return 0;
}