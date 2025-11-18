#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i =0; i<n;i++)
    {
        cin>>a[i];
    }   
    // for(int i =0; i<n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    cout<<"\n";
    //for iterator
    auto it = a.begin()+2;
    cout<<*it<<endl; 
    //for travese
    for(auto it = a.begin(); it<a.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
    //reverse useing it
    for(auto it = a.rbegin(); it<a.rend();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}