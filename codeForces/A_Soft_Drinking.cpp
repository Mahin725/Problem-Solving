#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = (k*l)/nl;
    int total_limes = c * d;
    int total_salt = p / np;

    int max_toasts = min({total_drink, total_limes, total_salt});
    cout << max_toasts / n << endl;
    return 0;
}