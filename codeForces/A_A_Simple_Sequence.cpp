#include <bits/stdc++.h>
using namespace std;

void raihanulSolve()
{
    int n;
    cin >> n;
    cout << 2 << " ";
    for (int i = n; i >= 3; i--)
    {
        cout << i << " ";
    }
    cout << 1 << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        raihanulSolve();
    }

    return 0;
}