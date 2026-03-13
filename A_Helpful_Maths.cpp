#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; //1+3+2;
    cin>>s;
    vector<int>a;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] !='+'){
            int num = s[i]-'0';
            a.push_back(num);
        }
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        if(i!=a.size()-1){
            cout<<a[i]<<"+";
        }else{
            cout<<a[i];
        }
    }
    // for(auto num:a){
    //     cout<<num<<"+";
    // }

    return 0;
}