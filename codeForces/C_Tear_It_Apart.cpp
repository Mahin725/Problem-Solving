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
        string s;
        cin>>s;
        int n = s.size();
        int ans = INT_MAX;
         for (int j = 'a'; j <= 'z'; j++) {
            int c = 0;
            int mx = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == j) {
                    mx = max(mx, c);
                    c = 0;
                }
                else {
                    c++;
                }
            }
            mx = max(mx, c);
            if (mx != 0) ans = min(ans, (int)log2(mx) + 1);
            else ans = 0;
        }
 
        cout << ans << '\n';
    }
    return 0;
}