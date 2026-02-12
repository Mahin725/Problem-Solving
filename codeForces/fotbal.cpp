#include "bits/stdc++.h"
#include <vector>
using namespace std;
#define int long long
#define pll pair<int, int>
const int N = 100;
string a[N];
map<string, int> bb, dd;
map<string, int> mp;
int sc[N];
bool cmp(string a, string b) {
  if (mp[a] != mp[b]) {
    return mp[a] > mp[b];
  }
  if (dd[a] != dd[b])
    return dd[a] > dd[b];
  return bb[a] > bb[b];
}
void solve() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  string d, b;
  for (int i = 1; i <= n * (n - 1) / 2; i++) {
    string t;
    int q, p;
    char c;
    cin >> t >> q >> c >> p;
    d = t.substr(0, t.find('-'));
    b = t.substr(t.find('-') + 1);
    if (q > p) {
      mp[d] += 3;
    }
    if (q == p) {
      mp[d]++, mp[b]++;
    }
    if (q < p) {
      mp[b] += 3;
    }
    bb[d] += q, bb[b] += p;
    dd[d] += q - p, dd[b] += p - q;
  }
  sort(a + 1, a + 1 + n, cmp);
  sort(a + 1, a + n / 2 + 1);
  for (int i = 1; i <= n / 2; i++)
    cout << a[i] << '\n';
}
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  int t = 1;
  // cin >> t;
  while (t--)
    solve();
}