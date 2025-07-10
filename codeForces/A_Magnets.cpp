/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : A_Magnets.cpp
 * platform: 
 * Date: 10 - 07 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<string>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=1;
    for(int i=1;i<n;i++){
        if(a[i-1] !=a[i]){
            cnt++;
        }
    } 
    cout<<cnt;
    return 0;
}