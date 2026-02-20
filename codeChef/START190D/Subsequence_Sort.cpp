#include <bits/stdc++.h>
using namespace std;

bool can_sort_with_k(const vector<int>& A, int k) {
    int prev = (A[0] | k);
    for (int i = 1; i < (int)A.size(); i++) {
        int curr = (A[i] | k);
        if (curr < prev) return false;
        prev = curr;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        vector<int> A(N);
        for (int &x : A) cin >> x;

        bool sorted = true;
        for (int i = 1; i < N; i++) {
            if (A[i] < A[i - 1]) {
                sorted = false;
                break;
            }
        }
        if (sorted) {
            cout << 0 << "\n";
            continue;
        }

        int low = 0, high = 1e9;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (can_sort_with_k(A, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        cout << low << "\n";
    }

    return 0;
}
