/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : B_Tournament.cpp
 * platform: 
 * Date: 10 - 07 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        int n,j,k,mx=0;
        cin>>n>>j>>k;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            mx = max(mx,a[i]);
        }
        cout << (k > 1 || a[j] == mx ? "YES" : "NO") << '\n';


    }   
    return 0;
}