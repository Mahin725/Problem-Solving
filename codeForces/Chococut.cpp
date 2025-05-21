#include <bits/stdc++.h>
using namespace std;

int max_chocolate(int n, int m, int k)
{
    int total = n * m;
    int max_keep = 0;
    if (k == 0)
        return total;
    for (int i = 1; i < n; i++)
    {                             // 2
        int top = i * m;          // 1*4=4,2*4=8
        int bottom = (n - i) * m; // 8,4

        if (top >= k)
        {
            max_keep = max(max_keep, bottom);
        }
        if (bottom >= k)
            max_keep = max(max_keep, top);
    }

    for (int j = 1; j < m; ++j)
    {
        int left = n * j; // 1=>3,6,9,
        int right = n * (m - j); //9,4,3

        if (left >= k)
            max_keep = max(max_keep, right); // ,
        if (right >= k)
            max_keep = max(max_keep, left);
    }

    if (total >= k)
        max_keep = max(max_keep, 0);

    return max_keep;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N, M, K;
        cin >> N >> M >> K;
        cout << max_chocolate(N, M, K) << '\n';
    }

    return 0;
}
