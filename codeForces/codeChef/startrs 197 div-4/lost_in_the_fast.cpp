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
        for(int i =0; i<n;i++)
        {
            cin>>a[i];
        }
        int bhomi = a[n-1];
        int idx = -1;
        for(int i =0; i<n;i++)
        {
            if(a[i] >= bhomi)
            {
                idx = i;
                break;
            }
        }
        cout<<n-idx -1<<endl;

    }   
    return 0;
}