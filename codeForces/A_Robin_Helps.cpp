#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int robinGold = 0, givenCount = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] >= k)
            {
                robinGold += a[i];
            }
            else if (a[i] == 0 && robinGold > 0)
            {
                robinGold--;
                givenCount++;
            }
        }
        cout<<givenCount<<endl;
    }
    return 0;
}