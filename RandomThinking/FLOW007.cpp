#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tcase;
    cin>>tcase;
    while(tcase--){
        int a;
        cin>>a;
        int reversenum =0;
        while(a!=0){
           int remainderr = a%10;
           reversenum = reversenum *10 + remainderr;
           a /=10;
           
        }
        cout<<reversenum<<endl;
    }
}
