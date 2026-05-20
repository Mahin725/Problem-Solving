#include <bits/stdc++.h>
using namespace std;

void solve()
{
     int N;
        cin >> N;

        vector<int> A(N);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int result = INT_MAX;
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (A[i] == A[j])
                {
                    int Cost = i + (N - 1 - j);
                    result = min(result, Cost);
                }
            }
        }

        if (result == INT_MAX)
            cout << -1 << '\n';
        else
            cout << result << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcase;
    cin >> tcase;

    while (tcase--)
    {
       solve();
    }

    return 0;
}