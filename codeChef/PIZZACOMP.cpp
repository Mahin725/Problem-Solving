#include <bits/stdc++.h>
using namespace std;

int main() {
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        int a,b;
        cin>>a>>b;
        int small = 100*b;
        int large = 225*a;
        if(small>large){
            cout<<"Small\n";
        }
        else if(small<large){
            cout<<"Large\n";
        }
        else{
            cout<<"Equal\n";
        }
    }
}
