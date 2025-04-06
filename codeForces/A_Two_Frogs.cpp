/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem link: https://codeforces.com/problemset/problem/2055/A
 * platform: div 2 codeforces
 * Date: 06 - 04 - 2025
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;cin>>tcase;
    while(tcase--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if(abs(a - b) % 2 == 1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }   
    return 0;
}