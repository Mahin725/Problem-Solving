#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;
    cin >> tcase;

    while (tcase--)
    {
        list<int> l;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            l.push_back(val);
        }
        l.sort();
        l.unique();
        for (auto it : l)
        {
            cout << it << " ";
        }
        cout<<endl;
    }

    return 0;
}