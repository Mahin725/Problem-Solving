#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin>>tcase;
    while(tcase--){
        int n;
        cin>>n;
        vector<int>a(n+1);
        for(int i=0; i<n;i++)
            cin>>a[i];
        int answer = -1;

        for (int x = 0; x < 256; x++) {
            int xor_sum = 0;
            for (int i = 0; i < n; i++) {
                xor_sum ^= (a[i] ^ x);
            }
            if (xor_sum == 0) {
                answer = x;
                break;
            }
        }

        cout << answer << '\n';

    }   
    return 0;
}