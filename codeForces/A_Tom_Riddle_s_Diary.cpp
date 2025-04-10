#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    set<string>names;
    
    for(int i =0; i<n;i++)
    {
        string name;
        cin>>name;
        if(names.find(name)==names.end()){
            cout<<"NO\n";
            names.insert(name);
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}