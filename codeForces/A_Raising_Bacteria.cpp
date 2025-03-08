#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, count = 0;
    cin >> x;

    while (x > 0) {
        count += (x & 1);
        x >>= 1; 
    }

    cout << count << endl;
    return 0;
}
