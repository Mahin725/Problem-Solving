#include <bits/stdc++.h>
using namespace std;

#define vdsort(v) sort(v.begin(), v.end(), greater<int>());

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
        vector<int> x(k);
        for (int i = 0; i < k; i++)
        {
            cin >> x[i];
        }
        // sort(x.begin(),x.end(),greater<int>());
        vdsort(x);
        int saved = 0;
        long long time_passed = 0;
        for (int i = 0; i < k; i++)
        {
            if (x[i] > time_passed)
            {
                saved++;
                time_passed += (n - x[i]);
            }
            else
            {
                break;
            }
        }
        cout << saved << '\n';
    }
    return 0;
}