#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int count_1 = 0;
        for (char c : s) {
            if (c == '1') count_1++;
        }

        int total_ones = (n - 1) * count_1 + (n - count_1);
        cout << total_ones << endl;
    }
    return 0;
}
