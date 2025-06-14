/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : C_Maximum_Median.cpp
 * platform: 
 * Date: 15 - 06 - 2025
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    auto ok = [&](long long midum)
    {
        long long cnt = 0;
        for (int i = (n/2); i < n; i++)
        {
            cnt += (a[i] <midum ?(midum-a[i]):0);
        }
        return cnt<=k;
    };

    long long l = 1, r = 2e9, mid, ans;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}