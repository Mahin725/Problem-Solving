/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : F_String_Game.cpp
 * platform: 
 * Date: 15 - 06 - 2025
 */

#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string t,p;
    cin>>t>>p;
    int n = t.size();
    int m = p.size();
    vector<int>a(n);
    for(int i=0; i<n;i++)
        cin>>a[i];
    
    auto ok=[&](int medium){
        vector<bool>bad(n+1);
        for(int i=0; i<medium;i++)
        {
            bad[a[i]] = true;
        }
        int j =0;
        bool found = false;
        for(int i=0; i<n;i++)
        {
            if(t[i] == p[j] && !bad[i+1]){
                j++;
            }
            if(j==m){
                found = true;
                break;
            }
        }
        return found;
    };
    long long l=0,r=n,mid,ans;

    while(l<=r)
    {
        mid = (l+r)/2;
        if(ok(mid)){
            ans = mid;
            l = mid+1;
        }else{
            r = mid-1;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}