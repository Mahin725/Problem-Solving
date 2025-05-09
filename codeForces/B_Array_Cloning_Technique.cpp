/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : B_Array_Cloning_Technique.cpp
 * platform: 
 * Date: 09 - 05 - 2025
 */
#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    map<int,int>freq;

    for(int i=0; i<n;i++){
        cin>>a[i];
        freq[a[i]]++;
    }
    int mx_freq=0;
    for(auto i:freq){
        mx_freq = max(mx_freq,i.second);
    }
    int ans =0;
    while(mx_freq<n){
        int remaing = n-mx_freq;
        int can_add = mx_freq;
        ans++;
        ans+=min(can_add,remaing);
        mx_freq+=min(can_add,remaing);
    }
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        solve();
    }   
    return 0;
}