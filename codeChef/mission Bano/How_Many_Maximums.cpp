#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        int count = 0;

        if (S[0] == '1') count++;

        if (S[N - 2] == '0') count++;

        for (int i = 1; i < N - 1; i++) {
            if (S[i - 1] == '0' && S[i] == '1') {
                count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}
