/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem link: 
 * platform: 
 * Date: 08 - 04 - 2025
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
        int n,k;
        cin>>n>>k;
        vector<int>a(n+1);
        for(int i =0; i<n;i++)
        {
            cin>>a[i];
        }
        set<int>distinc_elements(a.begin(),a.end());

        int mex =0;
        while(distinc_elements.count(mex)){
            mex++;
        }
        cout<<mex<<endl;
    }   
    return 0;
}