#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,T;
    cin>>A>>B>>T;

    int biscuit = floor(T / A) * B;
    cout<<biscuit<<endl;
    return 0;
}