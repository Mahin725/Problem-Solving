#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        if (N < 2) {
            cout << 0 << endl;
        } else {
            int count = 1 + (N - 2) / 7;
            cout << count << endl;
        }
    }
    return 0;
}