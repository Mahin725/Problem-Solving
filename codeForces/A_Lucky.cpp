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
        string s;
        cin>>s;
        long long sum1 = 0;
        long long sum2 = 0;
        
        for(int i=0;i<6;i++){
            int digit=0;
            if(i<3){
                digit = digit*10 +(s[i] - '0');
                sum1+=digit;
            }else{
                digit = digit*10 +(s[i] - '0');
                sum2+=digit;
            }
        }
        if(sum1==sum2){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
