/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : C_Three_Parts_of_the_Array.cpp
 * platform: 
 * Date: 03 - 05 - 2025
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n;i++)
        cin>>arr[i];
    
    long long sum1=0,sum2=0,ans=0;
    int l=0,r=n-1;
    while(l<=r)
    {
        if(sum1<sum2)
        {
            sum1+=arr[l];
            l++;
        }
        else{
            sum2+=arr[r];
            r--;
        }
        if(sum1==sum2)ans=sum1;
    }
    cout<<ans<<endl;
    return 0;
}