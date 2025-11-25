/**
 * "In the remembrance of Allah do hearts find rest." - Quran 13:28
 * 
 */ 
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tcase;
    cin>>tcase;
    while(tcase--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        int ans = INT_MAX;
        for(int i = 1; i < n; i++) {
            ans = min(ans, a[i] - a[i - 1]);
        }
        cout<<ans<<endl;

    }
    return 0;
}
