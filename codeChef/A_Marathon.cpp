#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> a(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 1; i < 4; i++)
    {
        if (a[i] > a[0])
        {
            
            cnt++;
        }
    }
    cout << cnt<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        solve();
    }
    return 0;
}