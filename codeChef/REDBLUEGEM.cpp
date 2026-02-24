#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long ac = a*c;
    long long bd = b*d;
    if(ac>bd){
        cout<<ac<<endl;
    }else{
        cout<<bd<<endl;
    }
}
