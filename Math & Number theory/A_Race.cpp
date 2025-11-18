#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, x, y;
        cin >> a >> x >> y;

        bool canWin = false;
        
        for(int bob_pos = 1; bob_pos <= 100; bob_pos++) {
            if(bob_pos == a) continue;

            if(abs(bob_pos - x) < abs(a - x) && abs(bob_pos - y) < abs(a - y)) {
                canWin = true;
                break;
            }
        }

        if(canWin) cout << "YES\n";
        else cout << "NO\n";
    }
}
