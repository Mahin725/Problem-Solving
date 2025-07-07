#include <bits/stdc++.h>
using namespace std;

void raihanuldev(){
    string chars;
    cin>>chars;
    map<char,int>mp;
    for(auto ch:chars){
        auto it = mp.find(ch);
        if(it !=mp.end()){
            mp[ch]++;
        }else{
            mp.insert({ch,1});
        }
    }
    for(auto element:mp){
        cout<<element.first<<element.second;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    raihanuldev();
    return 0;
}