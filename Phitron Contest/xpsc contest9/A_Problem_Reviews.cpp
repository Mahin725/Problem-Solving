/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : A_Problem_Reviews.cpp
 * platform: 
 * Date: 02 - 06 - 2025
 */

/**
 * Time Complextity=> O(n)
 * Space Complexity=> O(1) constant time✅
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
        bool flg = true;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x<5){
                flg = false;
            }
        }
        if(flg){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }   
    return 0;
}