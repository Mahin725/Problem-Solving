#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        int n;
        cin >> n;
        int ans = 1;
        for (int i = 1; i * i <= n; i++) {
            if (i * i <= n) {
                ans = i * i;
            }
        }
        cout << ans << "\n";
    }   
    return 0;
}