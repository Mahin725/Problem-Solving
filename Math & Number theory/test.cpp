#include <bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
    return __gcd(a,b); //log(min(a,b))
}
int LCM(int a,int b){
    return ((a/__gcd(a,b))*b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b)<<endl;
    cout<<LCM(a,b)<<endl;
    return 0;
}