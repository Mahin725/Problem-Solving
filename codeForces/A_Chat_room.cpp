#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    string w = "hello";
    int cnt =0;
    for(int i=0,j=0;i<s.size();i++)
    {
        if(s[i]==w[j]){
            j++;
            cnt++;
            // i++;
        }
    }
    if(cnt==w.size()){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}
// helhcludoo
//hello