#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt1=0,cnt2=0,i;
        map<int,int>mp;
        cin>>n;


        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            
            if(x>0) cnt1++;
            else cnt2++;
            if(x==1) mp[1]++;
        }

        if((cnt1+1)>=cnt2) cout<<0<<endl;
        else
        {
            if(mp[1]==0) cout<<1<<endl;
            else if(mp[1]==cnt1) cout<<2<<endl;
            else cout<<1<<endl;
        }
    }
    return 0;
}