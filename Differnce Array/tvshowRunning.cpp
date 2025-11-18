#include <bits/stdc++.h>
using namespace std;
const int n = 1e5;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    vector<int>d(n);
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        d[l] +=1;
        d[r+1] +=-1;
    }
    for(int i=1; i<=n;i++){
        d[i] = d[i - 1] + d[i];
    }
    bool flag = true;
    for(int i=1; i<=n;i++){
        if(d[i] > 2){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}