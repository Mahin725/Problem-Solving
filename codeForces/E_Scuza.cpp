/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : E_Scuza.cpp
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
    while(t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        vector<long long> prefix_sum(n);
        prefix_sum[0] = a[0];
        for(int i = 1; i < n; i++)
            prefix_sum[i] = prefix_sum[i-1] + a[i];

        vector<int> max_height(n);
        max_height[0] = a[0];
        for(int i = 1; i < n; i++)
            max_height[i] = max(max_height[i-1], a[i]);

        while(q--) {
            int k;
            cin >> k;

            int idx = upper_bound(max_height.begin(), max_height.end(), k) - max_height.begin();
            if(idx == 0)
                cout << 0 << " ";
            else
                cout << prefix_sum[idx - 1] << " ";
        }
        cout << '\n';
    }

    return 0;
}
