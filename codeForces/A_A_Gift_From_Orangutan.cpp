#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;cin>>tcase;
    while(tcase--)
    {
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0; i<n;i++)
            cin>>a[i];
        vector<int>b(n),c(n);

        sort(a.begin(), a.end());
        int mn = a[0];
        int mx = a[n - 1];
        cout << (mx - mn) * (n - 1) << endl;
    }   
    return 0;
}