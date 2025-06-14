/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : Factory_Machines.cpp
 * submissionLink:https://cses.fi/problemset/result/13300459/ 
 * Date: 14 - 06 - 2025
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t;
    cin>>n>>t;
    vector<int>a(n);
    for(int i=0; i<n;i++)
        cin>>a[i];
    
    
    auto ok=[&](long long secounds){
        long long cnt =0;
        for(int i=0; i<n;i++){
            cnt+= (secounds/a[i]);
            if(cnt >=t){
                return true;
            }
        } 
        return false;
    };

    long long l = 1,r=1e18,ans,mid;
    while(l<=r)
    {
        mid = l+(r-l)/2;
        if(ok(mid)){
            ans = mid;
            r = mid-1;
        }else{
            l = mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}

/**
 * 
 * 
 * 
 * */ 