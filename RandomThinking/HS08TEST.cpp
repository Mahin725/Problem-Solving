#include <bits/stdc++.h>
using namespace std;

int main() {
	   int x;
	   double y;
	   cin>>x>>y;
	   
	   if(x%5==0 && x + 0.50 <= y){
	        y-=(x+0.50);
	   }
	   
	   cout<<fixed<<setprecision(2)<<y<<endl;
}
