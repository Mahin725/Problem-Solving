#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        int a_odd_ones = 0, a_even_ones = 0;
        int b_odd_zeros = 0, b_even_zeros = 0;

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) { 
                if (a[i] == '1') a_even_ones++;
                if (b[i] == '0') b_even_zeros++;
            } else {
                if (a[i] == '1') a_odd_ones++;
                if (b[i] == '0') b_odd_zeros++;
            }
        }

        if (a_even_ones <= b_odd_zeros && a_odd_ones <= b_even_zeros) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
