#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0, cnt = 0;
    vector<int> ans;
    while (r<m)
    {
        
        if (l < n && a[l] < b[r])
        {
            cnt++;
            l++;
        }
        else
        {
            r++;
            ans.push_back(cnt);
        }
    }
    for (auto val : ans)
    {
        cout << val << " ";
    }
    return 0;
}