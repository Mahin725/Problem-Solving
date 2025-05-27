#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
    return __gcd(a, b);
}

int LCM(int a, int b) {
    return (a / __gcd(a, b)) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        if (x == y)
        {
            cout << x + y << '\n';
            continue;
        }

        int a = x, b = y;
        for (int i = 0; i < k; ++i)
        {
            int g = GCD(a, b);
            if (a > b) a = g;
            else b = g;

            int l = LCM(a, b);
            if (a < b) a = l;
            else b = l;
        }
        cout << a + b << '\n';
    }

    return 0;
}
