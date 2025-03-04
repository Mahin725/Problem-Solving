#include <iostream>
using namespace std;

bool canReach(long long current, long long target) {
    if (current > target) return false;
    if (current == target) return true;
    
    return canReach(current * 10, target) || canReach(current * 20, target);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        if (canReach(1, N)) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    return 0;
}
