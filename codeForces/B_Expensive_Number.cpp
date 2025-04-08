#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;

        int count_zeros = 0;
        int max_len = 1;  

        for (char c : n) {
            if (c == '0') {
                count_zeros++;
            } else {
                int current_len = count_zeros + 1;
                if (current_len > max_len) {
                    max_len = current_len;
                }
            }
        }

        cout << n.length() - max_len << endl;
    }

    return 0;
}
