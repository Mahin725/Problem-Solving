#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void raihanuldevSolve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[min(x % k, (k - x % k) % k)]++;
    }
    map<int, int> b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b[min(x % k, (k - x % k) % k)]++;
    }
    bool ok = true;
    for (auto [v, cnt] : a)
    {
        ok &= (b[v] == cnt);
    }
    cout << (ok ? "YES" : "NO") << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        raihanuldevSolve();
    }
    return 0;
}
