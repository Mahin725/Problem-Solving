#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s,digits,letter;
    cin>>s;
    // for(int i=0;i<n;i++){
    //     char c;cin>>c;
    //     if(isdigit(c)){
    //         s[i]=c;
    //         digits.append(c);
    //     }
    //     else{
    //         s[i]=c;
    //         letter=c;
    //     }
    // }
    string newString = s;
    sort(s.begin(),s.end());
    if(s==newString){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

    

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }   
    return 0;
}