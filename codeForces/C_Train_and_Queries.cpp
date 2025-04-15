#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        map<int,set<int>>mp;
        for(int i = 1; i<=n;i++)
        {
            int x;cin>>x;
            mp[x].insert(i);
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            if((mp.find(l)==mp.end()) || (mp.find(r)==mp.end())){
                cout<<"NO"<<endl;
            }else{
                int leftMostStation,rightMostStation;
                leftMostStation = *mp[l].begin();
                rightMostStation = *mp[r].rbegin();
                if(leftMostStation<rightMostStation)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
        }
    }
    return 0;
}