#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> roundNumbers; // To store round numbers
    int placeValue = 1; // Keeps track of current place value 

    while (n > 0) {
        int digit = n % 10; // Get the last digit
        if (digit != 0) {
            roundNumbers.push_back(digit * placeValue); // Form the round number
        }
        n /= 10; // Remove the last digit
        placeValue *= 10; // Move to the next place value
    }

    // Output results
    cout << roundNumbers.size() << endl;
    for (int num : roundNumbers) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false); // Fast input-output
    cin.tie(0); 

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
