/**
 * "In the remembrance of Allah do hearts find rest." - Quran 13:28
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;

    cin >> a >> b;

    int d = max(a, b);
    d = 6 - d + 1;
    int f = __gcd(d, 6);
    int e = d / f;
    int g = 6 / f;
    cout << e << "/" << g;
    return 0;
}
