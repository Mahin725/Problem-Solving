#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool canMake(ll k, ll n) {
    return (k * (k - 1)) / 2 >= n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        ll low = 1, high = 2e9;
        ll ans = -1;

        while (low <= high) {
            ll mid = (low + high) / 2;
            if (canMake(mid, n)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
