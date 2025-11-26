/**
 * "In the remembrance of Allah do hearts find rest." - Quran 13:28
 * 
 */ 
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int a,b,c;
    cin>>a>>b>>c;
    int mn = min(a,min(b,c));
    int mx = max(a,max(b,c));
    int mid = a+b+c-mn-mx;
    int diff = mx-mn;
    if(diff>=10){
        cout<<"check again"<<endl;
    }else{
        cout<<"final "<<mid<<endl;
    }
    return 0;
}
