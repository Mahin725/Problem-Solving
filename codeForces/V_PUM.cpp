#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 1;
    for (int i = 0; i < N; ++i) {
        // Print three numbers
        for (int j = 0; j < 3; ++j) {
            cout << count << " ";
            ++count;
        }
        // Print "PUM" at the end of the line
        cout << "PUM" << endl;
        // Skip the fourth number
        ++count;
    }

    return 0;
}
