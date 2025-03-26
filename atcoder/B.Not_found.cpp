// Problem Submission link: https://atcoder.jp/contests/abc071/submissions/64193583
// Author: Raihanul Islam Sharif

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    
    unordered_set<char>presentchar(s.begin(),s.end());

    for(char c = 'a'; c<='z'; ++c)
    {
        if(presentchar.find(c)== presentchar.end())
        {
            cout <<c<<endl;
            return 0;
        }
    }

    cout << "None" << endl;
    return 0;
}