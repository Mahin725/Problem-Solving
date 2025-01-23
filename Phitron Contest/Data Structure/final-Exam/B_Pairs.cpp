#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.first == b.first)
        return a.second > b.second; 
    return a.first < b.first;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> pairs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pairs[i].first >> pairs[i].second;
    }

    sort(pairs.begin(), pairs.end(),cmp);

    for (auto p : pairs)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}