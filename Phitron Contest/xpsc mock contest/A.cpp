#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>a(n+1);
    int target;
    for(int i =0; i<n;i++){
        cin>>a[i];
    }
    cin>>target;
    bool flag = false;
    for(int i =0; i<n; i++){
        if(a[i]==target){
            flag = true;
            cout<<i<<endl;
            return 0;
        }
    }
    if(!flag){
        cout<<"-1"<<endl;
    }
    return 0;
}