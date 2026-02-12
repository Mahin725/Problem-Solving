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
        vector<int> a(n);
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            result |=a[i];
        }
        cout<<result<<endl;
    }
    return 0;
}