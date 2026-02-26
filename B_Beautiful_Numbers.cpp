#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {

        long long x;
        cin >> x;
        
        string s = to_string(x);
        int len = s.size();
        
        int sum = 0;
        for (char c : s) sum += c - '0';
        
        if (sum <= 9) {
            cout << "0\n";
            continue;
        }
        
        int need = sum - 9;
        
        vector<int> reduct;
        for (int i = 0; i < len; ++i) {
            int d = s[i] - '0';
            
            if (i == 0 && len > 1) {
                if (d > 1) reduct.push_back(d - 1);
            } else {
                reduct.push_back(d);
            }
        }
        
        sort(reduct.rbegin(), reduct.rend());
        
        int moves = 0;
        int achieved = 0;
        for (int r : reduct) {
            achieved += r;
            moves++;
            if (achieved >= need) break;
        }
        cout << moves << "\n";
    }
    
    return 0;
}