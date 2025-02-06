// Contest Links: https://www.hackerrank.com/contests/assignment-01-a-introduction-to-algorithms-a-batch-06/challenges/connected-nodes-1/submissions/code/1388237689

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b); // eita undriected-graph tai 2 bar ei push korte hobe
        adj_list[b].push_back(a);
    }
    int query;
    cin >> query;
    while (query--)
    {
        int queries;
        cin >> queries;
        sort(adj_list[queries].begin(), adj_list[queries].end());
        reverse(adj_list[queries].begin(), adj_list[queries].end());
        if (adj_list[queries].empty())
        {
            cout << "-1";
        }
        else
        {
            for (auto child : adj_list[queries])
            {
                cout << child << " ";
            }
        }

        cout << endl;
    }
    return 0;
}