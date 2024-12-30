#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    vector<string> results;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c; // Read the three digits for the test case
        if (a < b && b < c) {
            results.push_back("STAIR");
        } else if (a < b && b > c) {
            results.push_back("PEAK");
        } else {
            results.push_back("NONE");
        }
    }

    // Output all results
    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
