
#include <bits/stdc++.h>
using namespace std;

int main() {
	int tcase;
	cin>>tcase;
	while(tcase--){
	  int n,m;
	  cin>>n>>m;
	  vector<int>a(n);  
	  vector<int>b(m);
	  for(int i=0;i<n;i++){
	    cin>>a[i];
	    
	  }
	    
	  for(int i=0;i<m;i++){
	    cin>>b[i];
	    
	  }
	   
	 int cnt =0;
	 for(int i=0;i<n;i++){
	   for(int j=0;j<m;j++){
	     if(a[i]>b[j]){
	       cnt++;
	     }
	   }
	 }
	 cout<<cnt<<endl;

}}
