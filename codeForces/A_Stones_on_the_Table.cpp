// Bismillahhir Rahmanir Rahim
// Problem Link: https://codeforces.com/problemset/problem/266/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    string color;cin>>color;
    int cnt =0;
    for(int i =1; i<n;i++){
        if(color[i-1]==color[i])
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}