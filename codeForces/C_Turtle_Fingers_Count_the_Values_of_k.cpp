#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(int tc){
    int a, b, l;
    cin >> a >> b >> l;
    set<int> ans;
    for(int i = 0; i <= 34; ++i){
        int x = l;
        bool fail = false;
        for(int _ = 0; _ < i; ++_){
            if(x % a){
                fail = true;
                break;
            }
            x /= a;
        }
        if(fail) break;
        while(true){
            ans.insert(x);
            if(x % b) break;
            x /= b;
        }
    }
    cout << ans.size();
}
 
bool multi = true;
 
signed main() {
    int t = 1;
    if (multi)cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve(i);
        cout << "\n";
    }
    return 0;
}