#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
       int n,m,p,q;
       cin>>n>>m>>p>>q;

       int x,j;
       x=n/p;
       j=n%p;
        
       if (j==0 && m!=x*q)
       {
        cout<<"NO"<<endl;
        continue;
       }
       
       cout<<"YES"<<endl;
    }
    
}