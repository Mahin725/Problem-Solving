/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem link:https://codeforces.com/contest/44/submission/314486022 
 * platform: codeforces div2 B
 * Date: 08 - 04 - 2025
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<pair<string,string>,bool>mp;
    
    for(int i =1; i<=n;i++)
    {
        string a,b;
        cin>>a>>b;
        mp[{a,b}] = true;
    }
    cout<<mp.size()<<endl;
    return 0;
}