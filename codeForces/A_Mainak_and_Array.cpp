/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : A_Mainak_and_Array.cpp
 * platform: 
 * Date: 07 - 07 - 2025
 */

#include <bits/stdc++.h>
using namespace std;

void raihanuldev(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    int ans = (a[n-1]-a[0]);
    for(int i=1;i<=n-1;i++){
        ans = max(ans,a[i]-a[0]);
    }
    for(int i=0;i<=n-2;i++){
        ans = max(ans,a[n-1]-a[i]);
    }
    for(int i=1;i<=n-1;i++){
        ans = max(ans,a[i-1]-a[i]);
    }
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin>>tcase;
    while(tcase--){
        raihanuldev();
    }   
    return 0;
}