// Problem Link: https://codeforces.com/problemset/problem/96/A
// if you have any confission feel free to contact with me 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int count =1;
    for(int i =1; i<s.size();i++){
        if(s[i]==s[i-1]){
            count++;
            if(count >= 7){
                cout<<"YES"<<endl;
                return 0;
            }
        }else{
            count =1;
        }
    }
    cout << "NO" << endl;
    return 0;
}
