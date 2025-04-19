/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem link: 
 * platform: 
 * Date: 19 - 04 - 2025
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
        string s;
        cin>>s;

        int l =0,r = n-1,ans = n;

        while(l<=r){
            if(s[l]==s[r]){
                break;
            }else{
                ans-=2;
                l++;
                r--;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}