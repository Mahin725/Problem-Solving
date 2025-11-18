#include <bits/stdc++.h>
// PBDS Template
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

//PBDS init Template
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    pbds<int>p;
    for(int i=1; i<=n;i++){
        int x;
        cin>>x;
        p.insert(x);
    }
    auto x = p.find_by_order(2); //it will run O(logN)
    // cout<<*x<<endl;
    int y = p.order_of_key(8); //koita ase ta
     // it will run O(logN); 
    cout<<y<<endl;
    for(auto val:p){
        cout<<val <<" ";
    }
    return 0;
}