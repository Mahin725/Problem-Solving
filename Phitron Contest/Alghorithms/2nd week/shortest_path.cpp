#include <bits/stdc++.h>
using namespace std;
long long dist[105][105];

void floyd_warshall(int n)
{
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dist[i][k] < INT_MAX && dist[k][j] < INT_MAX)
                {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
}

int main()
{
    long long n, e;
    cin >> n >> e;

    for (int i = 0; i <= n; i++) // inital man INFINTE and corner er value 0;
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == j)
                dist[i][j] = 0;
            else
            {
                dist[i][j] = INT_MAX;
            }
        }
    }
    for (int i = 0; i < e; i++)
    {
        long long a, b;
        long long w;
        cin >> a >> b >> w;
        dist[a][b] = min(dist[a][b], w);
    }
    floyd_warshall(n);
    long long q;
    cin >> q;
    while (q--) {
        long long x, y;
        cin >> x >> y;
        if (dist[x][y] == INT_MAX) cout << -1 << endl;
        else cout << dist[x][y] << endl;
    }
    return 0;
}