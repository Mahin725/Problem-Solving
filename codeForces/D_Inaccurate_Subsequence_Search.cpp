#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n, m;
    size_t k;
    cin >> n >> m >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    multiset<int> todo, done, extra;

    for (int j = 0; j < m; ++j) {
        int b;
        cin >> b;
        todo.insert(b);
    }

    for (int j = 0; j < m; ++j) {
        if (todo.find(a[j]) != todo.end()) {
            todo.erase(todo.find(a[j]));
            done.insert(a[j]);
        } else {
            extra.insert(a[j]);
        }
    }

    int ans = (done.size() >= k);

    for (int r = m; r < n; ++r) {
        int old = a[r - m];

        if (extra.find(old) != extra.end()) {
            extra.erase(extra.find(old));
        } else if (done.find(old) != done.end()) {
            done.erase(done.find(old));
            todo.insert(old);
        }

        if (todo.find(a[r]) != todo.end()) {
            todo.erase(todo.find(a[r]));
            done.insert(a[r]);
        } else {
            extra.insert(a[r]);
        }

        ans += (done.size() >= k);
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
