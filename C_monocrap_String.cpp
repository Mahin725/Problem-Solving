#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vll =vector<ll>;
ll solve(string s,ll n)
{
   vll a(n,-1),pref(n),last(2*n+1,-2);
   ll mini=LLONG_MAX,sum=0,total=0,off=n;
   for(ll i=0;i<n;i++)
   {
      if(s[i]=='a')a[i]=1;
      total+=a[i];
   }
   last[off]=-1;
   if(total==0)return 0;
   for(ll i=0;i<n;i++)
   {
      sum+=a[i];
      ll needed= sum-total;
      if((needed+off>=0) && needed+off<=2*n)
      {
         if(last[needed+off]!=-2)
         {
            mini=min(mini,i-last[needed+off]);
         }
      }
      last[sum+off]=i;
   }
   if(mini>=n)return -1;
   else return mini;
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      ll n;
      cin>>n;
      string s;
      cin>>s;
      cout<<solve(s,n)<<endl;      
   }
}