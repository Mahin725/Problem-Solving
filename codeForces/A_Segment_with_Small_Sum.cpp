/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : A_Segment_with_Small_Sum.cpp
 * platform: 
 * Date: 26 - 04 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i =0;i<n;i++)
        cin>>a[i];
    
    int ans =0,l=0,r=0;
    long long int sum =0;
    while(r<n)
    {
        sum+=a[r];
        if(sum <=k){
            ans = max(ans,r-l+1);
        }else{
            sum-=a[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}