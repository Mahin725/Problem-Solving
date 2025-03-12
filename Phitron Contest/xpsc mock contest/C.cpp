#include <bits/stdc++.h>
using namespace std;

bool canReach(int t) {
    if (t < 3) return false;  
    for (int x = 0; x * 3 <= t; x++) {
        if ((t - (x * 3)) % 4 == 0) return true; 
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    cout << (canReach(t) ? "YES" : "NO") << endl;
    return 0;
}


//frist attemp e time complexity onk bere gesilo jaar kaorne 10 minut penalty kailam