#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K; // Read N and K
    vector<int> arr(N);

    for (int i = 0; i < N; ++i) {
        cin >> arr[i]; // Read the array elements
    }

    deque<int> dq; // Deque to store indices of potential minimums
    vector<int> result; // Store results to print later

    for (int i = 0; i < N; ++i) {
        // Remove elements outside the current window
        if (!dq.empty() && dq.front() < i - K + 1) {
            dq.pop_front();
        }

        // Remove elements larger than the current element from the back
        while (!dq.empty() && arr[dq.back()] > arr[i]) {
            dq.pop_back();
        }

        // Add current element's index
        dq.push_back(i);

        // Add the minimum to the result if the window is fully formed
        if (i >= K - 1) {
            result.push_back(arr[dq.front()]);
        }
    }

    // Print the results
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
