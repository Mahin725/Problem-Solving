/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : A_Upload_More_RAM.cpp
 * platform: 
 * Date: 25 - 04 - 2025
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
        int x,y;
        cin>>x>>y;
        cout<<y*(x-1)+1<<endl;
    }   
    return 0;
}