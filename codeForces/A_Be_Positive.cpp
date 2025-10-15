#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
 
  vector<int> a(n);
 
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
 
  int neg_count = 0;
  int zero_count = 0;
  int pos_count = 0;
 
  for (int num : a) {
    if (num < 0)
      neg_count++;
    else if (num == 0)
      zero_count++;
    else
      pos_count++;
  }
 
  int retval = 0;
 
  if (neg_count % 2 == 1) {
    retval += 2;
  }
  retval += zero_count;
 
  cout << retval << endl;
 
  return;
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
