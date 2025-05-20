#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin>>tcase;
    while(tcase--){
        int a,b;
        cin>>a>>b;
        cout<<(a^b)<<endl;
    }   
    return 0;
}