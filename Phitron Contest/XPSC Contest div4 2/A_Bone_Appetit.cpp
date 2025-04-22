#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m ,x,y;
    cin>>n>>m;
    cin>>x>>y;
    long long multi = n*x + m*y;
    cout<<multi<<endl;   
    return 0;
}