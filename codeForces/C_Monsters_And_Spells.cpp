#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll t;cin>>t;
while(t--)
{
ll n;cin>>n;vector<array<ll,2>>v(n);
for(ll j=0;j<2;j++) for(ll i=0;i<n;i++) cin>>v[i][j];
ll r=n-1,g=0;
while(r>=0)
{
ll l=r,h=v[r][1],t=v[r][0];
while(l>=1&&t-h+1<=v[l-1][0]) h=max(h,v[--l][1]+t-v[l][0]);
g+=(h+1)*h/2;r=l-1;
}
cout<<g<<endl;
}
}