//https://codeforces.com/problemset/problem/723/A
//Problem Name: 723 A. The New Year Meeting Friends
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,o;
    cin>>m >>n >>o;
    int p = abs(m-n)+abs(m-o)+abs(n-o);
    cout<<p/2<<endl;
    return 0;
}