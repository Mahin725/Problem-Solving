/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : A_Maximize_the_Last_Element.cpp
 * platform: 
 * Date: 25 - 04 - 2025
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
        vector<int>arr(n);
        for(int i =0; i<n;i++)
        {
            cin>>arr[i];
        }
        int mx =0;
        for(int i =0; i<n; i+=2){
            if(mx<arr[i]){
                mx = arr[i];
            }
        }
        cout<<mx<<endl;
    }  
    return 0;
}