#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;cin>>tcase;
    while(tcase--)
    {
        int n,k;
        cin>>n>>k;
        string s;cin>>s;
        int cnt =0;
        for(int i =0; i<k;i++)
        {
            if(s[i]!='B'){
                cnt++;
            }
        }
        int min_w = cnt;
        for(int i = k; i < n; i++) {
            if(s[i-k] == 'W') cnt--;  
            if(s[i] == 'W') cnt++;  
            min_w = min(min_w, cnt);
        }

        cout << min_w << '\n';
    }   
    return 0;
}