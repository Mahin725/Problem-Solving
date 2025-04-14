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
        string A, B;
        cin >> A >> B;

        int chef = 0, chefina = 0;

        // Count scores
        for (int i = 0; i < N; i++) {
            if (A[i] == B[i]) continue; 

            if ((A[i] == 'R' && B[i] == 'S') ||
                (A[i] == 'S' && B[i] == 'P') ||
                (A[i] == 'P' && B[i] == 'R')) {
                chef++; 
            } else {
                chefina++; 
            }
        }

        if (chef > chefina) {
            cout << 0 << endl;
        } else {
            int diff = chefina - chef + 1;
            cout << diff << endl;
        }
    }
    return 0;
}