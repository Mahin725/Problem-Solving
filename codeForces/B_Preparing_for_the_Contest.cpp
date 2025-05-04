/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : B_Preparing_for_the_Contest.cpp
 * platform: 
 * Date: 05 - 05 - 2025
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
        int n,k;
        cin>>n>>k;
        for(int i=n-k; i>0; i--){
            cout<<i<<" ";
        }
        for(int i=n-k+1; i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }   
    return 0;
}