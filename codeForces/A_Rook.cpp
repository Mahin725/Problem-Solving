#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for(int i = 0; i < 8; i++) {
            char c = '0' + i + 1;
            if(s[1] != c) cout << s[0] << i + 1 << endl;
            c = 'a' + i;
            if(s[0] != c) cout << c << s[1] << endl;
        }
    }
    return 0;
}