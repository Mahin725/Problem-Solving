/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : D_Fast_search.cpp
 * platform:
 * Date: 02 - 06 - 2025
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int quries;
    cin >> quries;
    while (quries--)
    {
        int l, r;
        cin >> l >> r;
        auto left = lower_bound(a.begin(), a.end(), l) - a.begin();
        auto right = upper_bound(a.begin(), a.end(), r) - a.begin();
        cout << right - left << " ";
    }
    return 0;
}