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

    int n;
    if (!(cin >> n))
        return 0;
    vector<int> home(n), guest(n);
    for (int i = 0; i < n; ++i)
        cin >> home[i] >> guest[i];

    unordered_map<int, long long> home_count;
    for (int i = 0; i < n; ++i)
        home_count[home[i]]++;

    long long ans = 0;
    for (int j = 0; j < n; ++j)
    {
        ans += home_count[guest[j]];
    }

    cout << ans << '\n';
    return 0;
}
