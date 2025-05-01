#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    map<int, int> freq;
    int l = 0, r = 0, unique = 0;
    long long ans = 0;

    while (r < n)
    {
        freq[a[r]]++;
        if (freq[a[r]] == 1) unique++;

        while (unique > s)
        {
            freq[a[l]]--;
            if (freq[a[l]] == 0) unique--;
            l++;
        }

        ans += r - l + 1;
        r++;
    }

    cout << ans << '\n';
    return 0;
}
