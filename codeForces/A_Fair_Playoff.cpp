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
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        int mxA=max(s1,s2);
        int mxB=max(s3,s4);
        int mnA = min(s1,s2);
        int mnB = min(s3,s4);
        if(mxA <mnB || mxB <mnA){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}
