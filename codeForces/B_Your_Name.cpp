/**
 * "In the remembrance of Allah do hearts find rest." - Quran 13:28
 *
 */
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    string t;
    cin >> t;
    cin >> s;
    sort(t.begin(), t.end());
    sort(s.begin(), s.end());
    if (t == s)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
        solve();
    }
    return 0;
}
