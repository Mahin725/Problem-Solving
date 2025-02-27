//Bismillahir hir rahmanir rahim
//Problem Link: https://codeforces.com/problemset/problem/1296/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase; cin >> tcase;
    while (tcase--)
    {
        int n; cin >> n;
        vector<int> arr(n);
        int total = 0, odd_count = 0, even_count = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            total += arr[i];
            if (arr[i] % 2 == 0) even_count++;
            else odd_count++;
        }

        if (total % 2 != 0 || (odd_count > 0 && even_count > 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
