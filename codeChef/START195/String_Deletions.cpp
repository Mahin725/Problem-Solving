#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        int transitions = 0;
        for (int i = 1; i < N; i++) {
            if (S[i] != S[i - 1]) {
                transitions++;
            }
        }
        int max_ope = transitions / 2;
        int finalLength = N - max_ope;
        cout << finalLength << '\n';
    }

    return 0;
}
