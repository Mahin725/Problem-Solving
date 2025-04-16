#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        bool isGood = false;
        for (int i = 1; i < n; i++) {
            string t1 = s.substr(0, i);
            string t2 = s.substr(i);
            if (t1[0] != t2.back()) {
                isGood = true;
                break;
            }
        }
        cout << (isGood ? "YES" : "NO") << endl;
    }
    return 0;
}
