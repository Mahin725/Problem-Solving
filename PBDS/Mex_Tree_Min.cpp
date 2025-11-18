#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin>>tcase;
    while(tcase--)  
    {
        int n;
        cin>>n;
        vector<vector<int>> adj(n);
        for(int i = 0; i < n - 1; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(auto elem: adj){
            for(auto val: elem){
                cout<< val<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}