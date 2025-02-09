#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;cin>>tcase;
    while(tcase--)
    {
        string w;
        cin >> w;
        w = w.substr(0, w.size() - 2) + "i";
        cout << w << endl;
    }
    return 0;
}