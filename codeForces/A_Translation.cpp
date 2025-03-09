/**
 *Bismillah hir rahmanir Rahim
 * Author: Raihanul Islam Sharif
 * time complexity => 
 ***/ 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t,s;
    cin>>t>>s;
    reverse(t.begin(),t.end());
    if(t==s)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}