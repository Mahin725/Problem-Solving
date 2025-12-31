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
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    auto it = a.begin();
    it++;
    if (a.size() == 1)
    {
        cout << "NO";
    }
    else
    {

        cout << *it << endl;
    }
    return 0;
}
