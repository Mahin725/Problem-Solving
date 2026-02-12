#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for(int i=0; i<n;i++){
            cin>>A[i];
        }

        sort(A.begin(), A.end());

        long long result = 1;
        for (int i = 0; i < n; ++i) {
            int choices = A[i] - i;
            if (choices <= 0) {
                result = 0;
                break;
            }
            result = (result * choices) % MOD;
        }

        cout << result << '\n';
    }

    return 0;
}
