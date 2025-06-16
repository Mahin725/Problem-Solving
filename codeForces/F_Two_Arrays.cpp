/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : F_Two_Arrays.cpp
 * platform: 
 * Date: 15 - 06 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<int> best_a = a, best_b = b;

    
    set<int> s1, s2;
    for (int i = 0; i < n; i++) {
        s1.insert(a[i]);
        s2.insert(b[i]);
    }

    for (int i = 0; i < n; i++) {
        
        if (a[i] != b[i]) {
           
            int cnt1 = s1.count(a[i]) + s2.count(b[i]);
            
            int cnt2 = s1.count(b[i]) + s2.count(a[i]);

            if (cnt2 < cnt1 || (s1.count(a[i]) && s2.count(b[i]))) {  
                s1.erase(a[i]);
                s2.erase(b[i]);

                swap(a[i], b[i]);

                
                s1.insert(a[i]);
                s2.insert(b[i]);
            }
        }
    }

    set<int> final_a(a.begin(), a.end());
    set<int> final_b(b.begin(), b.end());

    cout << final_a.size() + final_b.size() << "\n";
    for (int x : a) cout << x << " ";
    cout << "\n";
    for (int x : b) cout << x << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
