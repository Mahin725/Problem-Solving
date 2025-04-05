#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        string s;
        cin>>s;
        if (s.size() >= 2 && s.substr(s.size() - 2) == "us") {
            s.replace(s.size() - 2, 2, "i");
            cout << s << '\n';
        } else {
            cout << s << '\n';
        }
    }   
    return 0;
}