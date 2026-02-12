#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if (k < n-1) {
            cout << -1 << "\n";
            continue;
        }
        vector<long long> arr(n);
        arr[0] = 1;
        for(int i = 1; i < n-1; i++) {
            arr[i] = arr[i-1] * 2;
            if (arr[i] > 1e9) {
                cout << -1 << "\n";
                continue;
            }
        }
        
        long long needed = k - (n-2);  
        if (needed <= 0 || needed > 1e9) {
            cout << -1 << "\n";
            continue;
        }
        
        arr[n-1] = needed * 2;
        arr[n-2] = needed * 3;
        if (arr[n-1] > 1e9 || arr[n-2] > 1e9) {
            cout << -1 << "\n";
            continue;
        }
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " \n"[i == n-1];
        }
        
    }
    
    return 0;
}