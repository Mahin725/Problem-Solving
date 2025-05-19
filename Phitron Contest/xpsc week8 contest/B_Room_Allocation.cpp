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
        vector<int> a(n);
        long long rooms = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            rooms += (a[i] + 1) / 2;
        }
        cout<<rooms<<endl;
        
    }
    return 0;
}