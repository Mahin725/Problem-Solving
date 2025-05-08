/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : C_Turtle_and_Good_Pairs.cpp
 * platform: 
 * Date: 08 - 05 - 2025
 */

#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    vector<pair<int,char>> freq(26);
    for(int i=0; i<26;i++)
        freq[i].second = 'a'+i;
    
    for(char ch:s){
        freq[ch-'a'].first++;
    }
    sort(freq.rbegin(),freq.rend());
    string result(n,' ');
    int idx = 0;

    for(auto item : freq){
        if(item.first==0){
            break;
        }
        for(int i=0; i<item.first;i++)
        {
            if(idx >=n){
                idx =1;
            }
            result[idx] = item.second;
            idx+=2;
        }
    }
    cout<<result<<endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;cin>>tcase;
    while(tcase--)
    {
        solve();
    }   
    return 0;
}