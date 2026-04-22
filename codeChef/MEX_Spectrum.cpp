#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), freqency(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freqency[a[i]]++;
        }

        vector<int> answer(n + 1);
        int missing = 0;

        for (int k = 0; k <= n; k++)
        {
            if (k > 0 && freqency[k - 1] == 0)
                missing++;

            answer[k] = max(missing, freqency[k]);
        }

        for (int val : answer)
            cout << val << " ";
        cout << '\n';
    }

    return 0;
}