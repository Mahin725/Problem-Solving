/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : Best_Coupon.cpp
 * platform:
 * Date: 16 - 05 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int persentice = ((n/100)*10);
        if(persentice>100){
            cout<<persentice<<endl;
        }else{
            cout<<100<<endl;
        }
    }
    return 0;
}