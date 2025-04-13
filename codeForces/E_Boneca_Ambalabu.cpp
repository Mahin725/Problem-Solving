#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        vector<int> bitCount(30, 0);
        for (int num : a) {
            for (int b = 0; b < 30; ++b) {
                if (num & (1 << b)) {
                    bitCount[b]++;
                }
            }
        }

        long long maxSum = 0;

        for (int i = 0; i < n; ++i) {
            long long sum = 0;
            for (int b = 0; b < 30; ++b) {
                int bit = (a[i] >> b) & 1;
                if (bit == 1) {
                    sum += 1LL * (n - bitCount[b]) * (1 << b);
                } else {
                    sum += 1LL * bitCount[b] * (1 << b);
                }
            }
            maxSum = max(maxSum, sum);
        }

        cout << maxSum << '\n';
    }

    return 0;
}
