#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0; i<n;i++)
        cin>>a[i];
    
    auto it =find(a.begin(),a.end(),x);
    if(it!=a.end()){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}