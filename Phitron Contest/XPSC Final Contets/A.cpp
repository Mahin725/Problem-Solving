#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;

    vector<long long> arr(n + 1, 0);
    vector<long long> prefix(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        prefix[i] = prefix[i - 1] + arr[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << '\n';
    }

    return 0;
}
