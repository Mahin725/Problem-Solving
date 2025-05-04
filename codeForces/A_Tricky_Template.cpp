/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : A_Tricky_Template.cpp
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
        int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        bool ok = false;
        for(int i=0; i<n;i++)
        {
            if(a[i] !=c[i] && b[i] !=c[i])
            {
                ok = true;
                break;
            }
        }
        if(ok)cout<<"YES\n";
        else cout<<"NO\n";
    }   
    return 0;
}