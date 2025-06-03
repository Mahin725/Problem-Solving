#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        int baseXor = 0;
        for (auto& x: a) {
            cin >> x;
            baseXor ^= x;
        }

        vector<int> b(m);
        for (auto& x: b) {
            cin >> x;
        }
        int mn, mx;
        mn = mx = baseXor;
        if(n & 1) {
            for (auto& i: b) {
                mx |= i;
            }
        } else {
            for (auto& i: b) {
                mn &= ~i;
            }
        }
        cout << mn << ' ' << mx << '\n';
    }
    return 0;
}
