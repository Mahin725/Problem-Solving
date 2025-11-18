#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        vector<int> P(N);
        int block = N / K, rem = N % K;
        int idx = 0, val = 1;
        for (int i = 0; i < K; ++i)
        {
            int len = block + (i < rem ? 1 : 0);
            vector<int> temp;
            for (int j = 0; j < len; ++j)
                temp.push_back(val++);
            reverse(temp.begin(), temp.end());
            for (int x : temp)
                P[idx++] = x;
        }
        for (int i = 0; i < N; ++i)
            cout << P[i] << " \n"[i == N - 1];
    }
    return 0;
}