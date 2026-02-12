/**
 * Bismillahir rahmanir rahim
 * Problem Link: https://codeforces.com/problemset/problem/443/A
 * topics about: explore SET and get input string with spaces
 * */ 


#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin,s);

    set<char>ul;

    for(auto ch:s){
        if(ch >='a' && ch<='z'){
            ul.insert(ch);
        }
    }
    cout<<ul.size()<<endl;
    return 0;
}