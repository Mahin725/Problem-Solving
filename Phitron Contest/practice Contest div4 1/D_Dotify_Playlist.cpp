#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int N, K, L;
        cin >> N >> K >> L;
        vector<int> languageLSongs;

        for (int i = 0; i < N; i++) {
            int Mi, Li;
            cin >> Mi >> Li;
            if (Li == L) {
                languageLSongs.push_back(Mi);
            }
        }

       
        if (languageLSongs.size() < K) {
            cout << -1 << endl;
        } else {
            sort(languageLSongs.rbegin(), languageLSongs.rend()); 
            int total = 0;
            for (int i = 0; i < K; i++) {
                total += languageLSongs[i];
            }
            cout << total << endl;
        }
    }
    return 0;
}