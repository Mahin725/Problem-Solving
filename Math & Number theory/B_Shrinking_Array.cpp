// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t; cin >> t;
//     while (t--) {
//         int n; cin >> n;
//         vector<int> a(n);
//         for (int& x : a) cin >> x;

//         bool isBeautiful = false;
//         for (int i = 0; i < n - 1; ++i) {
//             if (abs(a[i] - a[i + 1]) <= 1) {
//                 isBeautiful = true;
//                 break;
//             }
//         }

//         if (isBeautiful) cout << 0 << '\n';
//         else if (n == 2) cout << -1 << '\n';
//         else cout << 1 << '\n';
//     }

//     return 0;
// }
