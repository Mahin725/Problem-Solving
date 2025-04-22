#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;cin>>T;
    
    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        int total_cost = 0;

        for (int i = 0; i < N; ++i) {
            int normal_cost = A[i] * X;
            int master_cost = Y;

            total_cost += min(normal_cost, master_cost);
        }

        cout << total_cost << endl;
    }
    return 0;
}