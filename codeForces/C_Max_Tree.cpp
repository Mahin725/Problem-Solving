// Author: Raihanul Islam
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
        int n;
        cin >> n;

        vector<vector<int>> g(n + 1);

        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            long long x, y;
            cin >> u >> v >> x >> y;

            if (x > y)
            {
                g[u].push_back(v);
            }
            else
            {
                g[v].push_back(u);
            }
        }

        vector<int> indegArry(n + 1, 0);
        for (int u = 1; u <= n; u++)
        {
            for (int v : g[u])
                indegArry[v]++;
        }

        priority_queue<int> q;
        for (int i = 1; i <= n; i++)
            if (indegArry[i] == 0)
                q.push(i);

        vector<int> order;
        while (!q.empty())
        {
            int u = q.top();
            q.pop();
            order.push_back(u);
            for (int v : g[u])
            {
                if (--indegArry[v] == 0)
                    q.push(v);
            }
        }

        vector<int> p(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            p[order[i]] = n - i;
        }

        for (int i = 1; i <= n; i++)
            cout << p[i] << " ";
        cout << "\n";
    }
}
