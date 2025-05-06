#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;
        cout << n << endl;
        for (int i = 0; i < n; ++i) {
            int b_pos = 3 * i + 1;     
            int a_pos = 3 * i + 2;   
            cout << b_pos << " " << a_pos << endl;
        }
    }
    return 0;
}
