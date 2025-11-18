/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : binarySearch.cpp
 * platform: 
 * Date: 01 - 06 - 2025
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0; i<n;i++){
        cin>>a[i];
    }   
    while(k--){
        int query;
        cin>>query;
        int l=0,r=n-1,mid= (l+r)/2;
        bool gotit= false;
        while(l<r){
            if(a[mid]==query){
                gotit = true;
            }
            else if(query < a[mid]){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        if(gotit){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }
    return 0;
}