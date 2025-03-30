#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    
    int lastA = a.back()-'0';
    int lastB = b.back()-'0';

    if((lastA + lastB) %2 ==0)
        cout<<"Even."<<endl;
    else
        cout<<"Odd."<<endl;
    return 0;
}