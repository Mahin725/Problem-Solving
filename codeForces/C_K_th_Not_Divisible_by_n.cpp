#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        int n,k;
        cin>>n>>k;

        auto ok=[&](int total_range){
            long long totalN = total_range-(total_range/n);
            return totalN >=k;
        };

        long long l=1,r=2e9,mid,ans=0;
        while(l<=r){
            mid = l + (r - l) / 2;
            if(ok(mid)){
                ans = mid;
                r = mid-1;
                
            }else{
                l = mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}