//Bismillahir hir rahmanir rahim
//Problem Link: https://codeforces.com/contest/2193/problem/A

#include <bits/stdc++.h>
using namespace std;

void heySolve(){
    int n,s,x;
    cin>>n>>s>>x;
    long long sum =0;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        sum+=val;
    }
    if(s >=sum && (s-sum)%x==0){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tcase;cin>>tcase;
    while(tcase--){
        heySolve();
    }
    return 0;
}