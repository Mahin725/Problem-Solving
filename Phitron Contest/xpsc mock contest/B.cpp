#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    cout<<s<<endl;
    return 0;
}