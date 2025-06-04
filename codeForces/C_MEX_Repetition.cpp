#include <iostream>
#include <vector>
#include <set>
using namespace std;

const long long INF = 1e18 + 1e9;

int getMex(int n, const set<int>& st) {
    int cur = 0;
    for (int x : st) {
        if (cur != x) return cur;
        cur++;
    }
    return n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        set<int> st;

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            st.insert(v[i]);
        }

        if (n == 1) {
            if (k % 2 == 1) {
                v[0] = 1 - v[0];
            }
            cout << v[0] << "\n";
            continue;
        }

        k %= (n + 1);
        if (k == 0) {
            for (int i = 0; i < n; ++i) {
                cout << v[i] << " ";
            }
            cout << "\n";
            continue;
        }

        for (int i = n - k + 1; i < n; ++i) {
            cout << v[i] << " ";
        }

        cout << getMex(n, st) << " ";

        for (int i = 0; i < n - k; ++i) {
            cout << v[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}
