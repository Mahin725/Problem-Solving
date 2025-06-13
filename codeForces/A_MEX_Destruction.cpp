#include <bits/stdc++.h>
using namespace std;


#define ll long long

void raihanSolve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int f = 0, non_zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0 && !non_zero)
        {
            f++;
            non_zero = 1;
        }
        if (a[i] == 0)
        {
            non_zero = 0;
        }
    }
    if (f > 2)
    {
        cout << 2 << "\n";
    }
    else
    {
        cout << f << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        raihanSolve();
    }
    return 0;
}
