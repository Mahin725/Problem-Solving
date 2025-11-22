/**
 * "In the remembrance of Allah do hearts find rest." - Quran 13:28
 * 
 */ 
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int>elements(2*n);
    int odd=0;int even=0;
    for(int i=0;i<n*2;i++){
        int val; cin>>val;
        elements.push_back(val);
        if(val%2==0){
            even++;
        }else{
            odd++;
        }
    }
    // cout<<even<<" "<<odd;
    if(even==odd){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tcase;
    cin>>tcase;
    while(tcase--){
        solve();
    }
    return 0;
}
