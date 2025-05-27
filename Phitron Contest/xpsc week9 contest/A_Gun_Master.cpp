#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--)
    {
        int N, D;
        cin >> N >> D;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
            cin >> A[i];

        int switches = 0;
        bool holdingClose = true;
        for (int i = 0; i < N; ++i)
        {
            if (A[i] <= D)
            {
                if (!holdingClose)
                {
                    ++switches;
                    holdingClose = true;
                }
            }
            else
            {
                if (holdingClose)
                {
                    ++switches;
                    holdingClose = false;
                }
            }
        }

        cout << switches << '\n';
    }

    return 0;
}
