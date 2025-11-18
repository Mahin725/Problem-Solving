#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    // for(int i=1; i<=n;i++)  //time complexity=> big o(N)
    // {
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }
    // }
    for(int i=1; i<=sqrt(n);i++){ //time complexity=> big O(Sqrt);
        if(n%i==0){
            cout<<i<<" ";
            cout<<n/i<<" ";
        }
    }
    return 0;
}