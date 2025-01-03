#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int a,b; cin>>a>>b;
    int count =0;

    while(true)
    {
        if(a>b){
            break;
        }else{
            a = a*3;
            b = b*2;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}