#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tcase;
	cin>>tcase;
	while(tcase--){
	  int n;
	  cin>>n;
	  vector<int>a(n);
	  for(int i=1;i<=n;i++){
	    cin>>a[i];
	  }
	  
	  int odd =0,even=0;
	  for(int i=1;i<=n;i++){
	    if(i%2==0){
	      even+=a[i];
	    }else{
	      odd+=a[i];
	    }
	  }
	  if(odd>even){
	    cout<<odd<<endl;
	  }else{
	    cout<<even<<endl;
	  }
	  
	}

}
