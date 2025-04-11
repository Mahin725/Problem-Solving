#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second set of variables
    int i2;
    double d2;
    string s2;

    // Read inputs
    cin >> i2;
    cin >> d2;
    cin.ignore(); // to ignore the newline character after reading d2
    getline(cin, s2); // to read a full line including spaces

    // Print outputs
    cout << i + i2 << endl;
    cout << fixed << setprecision(1) << d + d2 << endl;
    cout << s + s2 << endl;

    return 0;
}
