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
        vector<int> A(N), B(N);
        for (int i = 0; i < N; ++i) cin >> A[i];
        for (int i = 0; i < N; ++i) cin >> B[i];

        int max_satisfaction = 0;
        for (int L = 0; L <= 100; ++L) {
            int sum = 0;
            for (int i = 0; i < N; ++i) {
                if (B[i] <= L && A[i] > 0) sum += A[i];
            }
            max_satisfaction = max(max_satisfaction, sum - L);
        }
        cout << max_satisfaction << '\n';
    }
    return 0;
}