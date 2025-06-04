/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : Nutrition_Cost.cpp
 * platform: 
 * Date: 04 - 06 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) 
            cin >> a[i];
        for (int i = 0; i < n; ++i) 
            cin >> b[i];

        int maxVal = 0;
        int totalMasks = 1 << n;

        for (int mask = 1; mask < totalMasks; ++mask)
        {
            unordered_set<int> vitamins;
            int cost = 0;
            for (int i = 0; i < n; ++i)
            {
                if (mask & (1 << i))
                {
                    vitamins.insert(a[i]);
                    cost += b[i];
                }
            }

            int val = (int)vitamins.size() * c - cost;
            maxVal = max(maxVal, val);
        }

        cout << maxVal << '\n';
    }

    return 0;
}
