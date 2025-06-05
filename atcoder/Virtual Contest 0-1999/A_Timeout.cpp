/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : A_Timeout.cpp
 * platform: 
 * Date: 05 - 06 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0; i<n;i++)
        cin>>a[i];
    bool flg = true;
    if (a[0] > x)
        flg = false;
    for(int i=1; i<n;i++)
    {
        if(!(a[i] - a[i-1] <=x))
        {
            flg = false;
            break;
        }
    }
    if(flg){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
    return 0;
}