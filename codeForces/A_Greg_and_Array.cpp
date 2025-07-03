#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100001;

long long A[MAXN], B[MAXN], C[MAXN];
long long M[MAXN][3];

int main() {
    int n, m, k;
    while (cin >> n >> m >> k) {
        // Reset all arrays
        fill(A, A + n, 0);
        fill(B, B + n + 2, 0); 
        fill(C, C + m + 2, 0);
        memset(M, 0, sizeof(M));

        for (int i = 0; i < n; ++i)
            cin >> A[i];

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < 3; ++j)
                cin >> M[i][j];
            M[i][0]--;  
            M[i][1]--;
        }

        for (int i = 0; i < k; ++i) {
            int a, b;
            cin >> a >> b;
            a--, b--;
            C[a]++;
            C[b + 1]--;
        }

        long long tmp = 0;
        for (int i = 0; i < m; ++i) {
            tmp += C[i];
            B[M[i][0]] += tmp * M[i][2];
            B[M[i][1] + 1] -= tmp * M[i][2];
        }

        tmp = 0;
        for (int i = 0; i < n; ++i) {
            tmp += B[i];
            cout << (i ? " " : "") << A[i] + tmp;
        }
        cout << '\n';
    }
    return 0;
}
