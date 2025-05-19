#include <bits/stdc++.h>
using namespace std;

const int mxN = 30;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        int n;cin>>n;
        vector<int>cnt(mxN);
        for(int i=1; i<=n;i++){
            int x;
            cin>>x;
            cnt[__lg(x)]++;
        }
        long long ans =0;
        for(int i=0; i<mxN;i++){
            ans+= (1LL * cnt[i]*(cnt[i]-1))/2;
        }
        cout<<ans<<endl;
        
    }  
    return 0;
}