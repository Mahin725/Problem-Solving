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
        vector<int>a(n+1);
        for(int i =0; i<n;i++)
            cin>>a[i];
        while(q--)
        {
            bool possible = false;
            int start,destination;
            cin>>start>>destination;
            for(int i =0; i<n;i++)
            {
                if(a[i]==start){
                    for(int j = i; j<n;j++){
                        if(a[j]==destination){
                            possible = true;
                            break;
                        }
                    }
                }
            }
            if(possible)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}