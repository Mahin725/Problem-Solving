#include <bits/stdc++.h>
using namespace std;

void raihanulSolve(){
    int n,m,k;
    cin>>n>>m>>k;
    long long low=1,high = m;
    while(low<high){
        long long mid = (high+low)/2;
        if(n* (mid* (m/(mid+1))+ m%(mid+1)) >=k){
            high = mid;
        }else{
            low=mid+1;
        }
    }
    cout<<low<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        raihanulSolve();
    }   
    return 0;
}