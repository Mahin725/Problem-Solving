#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    map<string,vector<int>>mp;
    int n;cin>>n;
    for(int i =0; i<n;i++)
    {
        int N;cin>>N;
        string keySring;cin>>keySring;
        for(int k =0; k<N;k++){
            int val;cin>>val;
            // mp.insert({keySring,mp[keySring].push_back(val)});
            mp[keySring].push_back(val);
        }

    }
    for(auto clas:mp){
        cout<<"Batch Name: "<<clas.first<<endl;
        cout<<"Values: ";
        for(auto val:clas.second){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}