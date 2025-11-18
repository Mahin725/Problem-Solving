/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : C_Joty_and_Chocolate.cpp
 * platform: 
 * Date: 27 - 05 - 2025
 */

#include <bits/stdc++.h>
using namespace std;
long long GCD(long long a,long long b){
    return __gcd(a,b); //log(min(a,b))
}
long long LCM(long long a,long long b){
    return ((a/__gcd(a,b))*b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    long long x = (n/a)*p, y= (n/b)*q, overlap= (n/LCM(a,b));   
    long long ans = ((x+y)-(overlap*(p+q)))+(overlap * max(p,q));
    cout<<ans<<endl;
    return 0;
}