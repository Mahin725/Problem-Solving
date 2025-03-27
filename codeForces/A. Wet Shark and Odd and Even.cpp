#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    long long sum = 0, minOdd = LLONG_MAX;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] % 2 != 0) {
            minOdd = min(minOdd, (long long)arr[i]);
        }
    }

    if (sum % 2 == 0) {
        cout << sum << endl;
    } else {
        cout << sum - minOdd << endl;
    }

    return 0;
}
