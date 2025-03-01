//Problem Link: https://codeforces.com/problemset/problem/61/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string frist,secound;
    cin>>frist>>secound;
    for(int i =0; i<frist.size();i++)
    {
        if(frist[i]!=secound[i]){
            cout<<1;
        }else{
            cout<<0;
        }
        
    }
    return 0;
}