#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int64_t n;
        cin >> n;
        if (n % 2050 != 0)
        {
            cout << "-1\n";
            continue;
        }

        int64_t q = n / 2050;
        int sum_of_digits = 0;

        while (q > 0)
        {
            sum_of_digits += q % 10;
            q /= 10;
        }

        cout << sum_of_digits << '\n';
    }

    return 0;
}
