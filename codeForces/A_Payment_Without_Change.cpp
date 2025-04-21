/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem link: https://codeforces.com/contest/1256/submission/316516981
 * platform: 
 * Date: 21 - 04 - 2025
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin>>q;
    while(q--)
    {
        long long a,b,n,S;
        cin>>a>>b>>n>>S;

        long long use_n = min(S / n, a);
        long long remaining = S - use_n * n;
        if(remaining <=b){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }   
    return 0;
}