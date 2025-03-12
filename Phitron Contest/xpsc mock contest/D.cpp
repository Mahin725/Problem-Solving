#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    long long sum = 0;
    int prev = INT_MAX; 

    for (int i = n - 1; i >= 0; i--) { 
        if (a[i] >= prev) {
            a[i] = prev - 1; 
        }
        if (a[i] > 0) sum += a[i]; 
        prev = a[i];
    }

    cout << sum << endl;
    return 0;
}
