#include <bits/stdc++.h>
using namespace std;

void printDigits(int n){
    if(n==0)return;
    int digit = n%10;
    printDigits(n/10);
    
    cout<<digit<<" ";
}


int main()
{
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        int n;cin>>n;
        if(n==0)
            cout<<"0";
        else{
            printDigits(n);
            cout<<endl;
        }
    }
    return 0;
}