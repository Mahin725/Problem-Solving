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
        vector<int> A(N);
        int sum = 0;
        bool ok = true;
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            sum += A[i];
            if (sum < 40 * (i + 1)) ok = false;
        }
        cout << (ok ? "Yes" : "No") << '\n';
    }
    return 0;
}