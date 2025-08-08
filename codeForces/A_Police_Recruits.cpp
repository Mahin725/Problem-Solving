#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int available = 0;   
    int untreated = 0; 

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == -1) {
            if (available > 0) {
                --available;
            } else {
                ++untreated;
            }
        } else {
            available += x;
        }
    }

    cout << untreated << '\n';
    return 0;
}
