#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k;
    cin>>n>>k;
    vector<long long>v;
    for(long long i=1; i*i<=n; i++){
        if(n%i==0){
            v.push_back(i);
            if((n/i)!=i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    if(v.size() >= k){
        cout<<v[k-1]<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}