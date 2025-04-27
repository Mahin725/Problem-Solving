/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : F_Segments_with_Small_Spread.cpp
 * platform: 
 * Date: 27 - 04 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long k;
    cin>>n>>k;
    vector<long long>a(n);
    for(int i=0; i<n;i++)
        cin>>a[i];
    multiset<long long>ml;
    int l=0,r=0;
    long long ans=0;
    
    while(r<n){
        ml.insert(a[r]);  //eita frist step mane contributions add korbo
        long long mn=*ml.begin(),mx=*ml.rbegin();
        if(mx-mn <=k){
            ans+=(r-l+1);
        }else{
            while(l<=r){
                mn=*ml.begin(),mx=*ml.rbegin();
                if(mx-mn <=k) break;
                ml.erase(ml.find(a[l]));
                l++;
            }
            mn=*ml.begin(),mx=*ml.rbegin();
            if(mx-mn <=k){
                ans+=(r-l+1);
            }
        }
        r++;
    }
    
    cout<<ans<<endl;
    return 0;
}