#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int maxBananas = 0;

        for (int incA = 0; incA <= 5; ++incA) {
            for (int incB = 0; incB <= 5 - incA; ++incB) {
                int incC = 5 - incA - incB;

                int newA = a + incA;
                int newB = b + incB;
                int newC = c + incC;

                int product = newA * newB * newC;
                maxBananas = max(maxBananas, product);
            }
        }
        cout << maxBananas << '\n';
    }
    return 0;
}