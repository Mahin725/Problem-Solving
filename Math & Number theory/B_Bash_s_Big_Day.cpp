#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int freq[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);

    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    int ans = 1;

    for (int i = 2; i < N; i++) {
        int cnt = 0;
        for (int j = i; j < N; j += i) {
            cnt += freq[j];
        }
        ans = max(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}
