#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        cin>>x;
        n--;
        while(n--){
            int a;
            cin>>a;
            x = x&a;
        }
        cout<<x<<endl;
    }   
    return 0;
}