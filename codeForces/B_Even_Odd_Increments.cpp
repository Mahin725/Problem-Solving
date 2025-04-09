#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        int n, q;
        cin >> n >> q;

        long long oddSum = 0, evenSum = 0;
        int oddCount = 0, evenCount = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                evenSum += x;
                evenCount++;
            }
            else
            {
                oddSum += x;
                oddCount++;
            }
        }

        for (int i = 0; i < q; i++)
        {
            int type, x;
            cin >> type >> x;

            if (type == 0)
            {
                evenSum += 1LL * evenCount * x;
                if (x % 2 == 1)
                {
                    // Even → Odd
                    oddSum += evenSum;
                    oddCount += evenCount;
                    evenSum = 0;
                    evenCount = 0;
                }
            }
            else
            {
                oddSum += 1LL * oddCount * x;
                if (x % 2 == 1)
                {
                    // Odd → Even
                    evenSum += oddSum;
                    evenCount += oddCount;
                    oddSum = 0;
                    oddCount = 0;
                }
            }

            cout << oddSum + evenSum << '\n';
        }
    }
    return 0;
}
