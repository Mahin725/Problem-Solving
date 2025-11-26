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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool flg = true;
        for(int i=0;i<n-1;i++){
            int diff = abs(a[i]-a[i+1]);
            if(diff!=5  && diff!=7){
                flg = false;
                break;
            }
        }
        if(flg){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
