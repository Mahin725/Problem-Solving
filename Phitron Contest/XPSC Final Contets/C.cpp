#include <iostream>
#include <vector>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n - 2);
        long long sum_remaining = 0;
        for (int i = 0; i < n - 2; ++i) {
            cin >> arr[i];
            sum_remaining += arr[i];
        }
        long long original_sum;
        cin >> original_sum;
        long long missing_sum = original_sum - sum_remaining;
        if (missing_sum < 0) {
            cout << "0\n";
        } else {
            cout << missing_sum + 1 << "\n";
        }
    }

    return 0;
}