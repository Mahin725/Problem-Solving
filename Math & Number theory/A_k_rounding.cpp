#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long tenPowerK = 1;
    for (int i = 0; i < k; i++) {
        tenPowerK *= 10;
    }

    long long gcd = __gcd(n, tenPowerK);
    long long lcm = (n / gcd) * tenPowerK;

    cout << lcm << '\n';
    return 0;
}
