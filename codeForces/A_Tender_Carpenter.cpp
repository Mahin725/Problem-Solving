#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool can_partition(const vector<int>& arr) {
    // Check if there exists a triplet in the sorted array that satisfies the triangle condition
    for (int i = 2; i < arr.size(); ++i) {
        if (arr[i-2] + arr[i-1] > arr[i]) {
            return true;  // Found a valid triplet
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n;
        cin >> n;  // Length of the array
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Sort the array to check for triangle inequality
        sort(a.begin(), a.end());

        // Check if a valid partition is possible (at least one triplet forming a valid triangle)
        if (can_partition(a)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
