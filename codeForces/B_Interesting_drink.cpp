/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : B_Interesting_drink.cpp
 * platform: 
 * Date: 03 - 06 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n;i++)
        cin>>a[i];

    sort(a.begin(),a.end());
    cin>>q;
    while(q--)
    {
        int k;
        cin>>k;
        auto it = upper_bound(a.begin(),a.end(),k);
        cout<<it-a.begin()<<endl;
    }   
    return 0;
}

