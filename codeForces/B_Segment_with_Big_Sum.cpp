#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    long long s;
    cin >> n >> s;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int left = 0;
    long long current_sum = 0;
    int min_len = INT_MAX;

    for (int right = 0; right < n; right++) {
        current_sum += a[right];

        while (current_sum >= s) {
            min_len = min(min_len, right - left + 1);
            current_sum -= a[left];
            left++;
        }
    }

    if (min_len == INT_MAX)
        cout << -1 << endl;
    else
        cout << min_len << endl;

    return 0;
}
