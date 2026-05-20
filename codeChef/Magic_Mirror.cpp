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

    int sum = A[0] + A[N - 1];
    bool ok = true;

    for (int i = 0; i < N / 2; i++)
    {
        if (A[i] + A[N - 1 - i] != sum)
        {
            ok = false;
            break;
        }
    }

    if (ok)
        cout << "Yes\n";
    else
        cout << "No\n";
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