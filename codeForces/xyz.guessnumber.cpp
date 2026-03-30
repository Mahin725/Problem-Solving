#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    if(k>=3*n) cout<<0<<endl;
    else cout<<3*n - k<<endl;
    
    return 0;
}