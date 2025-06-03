/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : C_Number_of_Pairs.cpp
 * platform:
 * Date: 04 - 06 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        long long count = 0;

        for (int i = 0; i < n; i++)
        {
            int left = l - a[i];
            int right = r - a[i];

            int low = lower_bound(a.begin() + i + 1, a.end(), left) - a.begin();
            int high = upper_bound(a.begin() + i + 1, a.end(), right) - a.begin();

            count += (high - low);
        }

        cout << count << endl;
    }
    return 0;
}