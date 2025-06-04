/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : Distinct_2_Subarray.cpp
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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        int ans = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            unordered_map<int, int> freq;
            for (int j = i; j < n; ++j)
            {
                freq[a[j]]++;
                if (freq.size() > 2) break;
                if (freq.size() == 2)
                {
                    ans = min(ans, j - i + 1);
                    break;
                }
            }
        }
        cout << (ans == INT_MAX ? -1 : ans) << '\n';
    }

    return 0;
}
