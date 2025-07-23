#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N, C;
        cin >> N >> C;
        vector<int> A(N);
        int maxA = 0;
        set<int> friends;
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            maxA = max(maxA, A[i]);
            friends.insert(A[i]);
        }
        int ans = 0;
        while (true) {
            int alice = C + ans;
            bool has_less = false, has_equal = false;
            for (int i = 0; i < N; ++i) {
                if (A[i] < alice) has_less = true;
                if (A[i] == alice) has_equal = true;
            }
            if (has_less && !has_equal) break;
            ++ans;
        }
        cout << ans << '\n';
    }
    return 0;
}