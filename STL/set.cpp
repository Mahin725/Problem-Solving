#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    set<int>s;
    for(int i =0;i<n;i++)
    {
        int x;cin>>x;
        s.insert(x); //time complexity o(logN);
    }
    auto it = s.find(34);
    if(it!=s.end()){
        cout<<"Found\n";
    }else
        cout<<"Not found!\n";
    
    //erase
    // s.erase(8);
    cout<<s.count(12)<<"\n";
    for(auto value:s)
    {
        cout<<value<<" ";
    }
    //access with iterator
    // auto it = s.begin();
    // it++;
    // cout<<*it<<endl;
    return 0;
}