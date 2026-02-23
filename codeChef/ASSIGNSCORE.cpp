#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tcase;
	cin>>tcase;
	while(tcase--)
	{
	    int n;
	    cin>>n;
	    vector<int>a(n);
	    long long Sum= 0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        Sum+=a[i];
	    }
	    int totalMarkForPass = (n+1)*100/2;
	    int required = totalMarkForPass-Sum;
	    if(required <= 0){
	        cout<<0<<endl;
	        continue;
	    }
	    if(required>100){
	        cout<<-1<<endl;
	        continue;
	    }
	    cout<<required<<endl;
	    
	    
	}

}
