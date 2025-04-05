#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int tcase;
	cin>>tcase;
	while(tcase--)
	{
	    int bill; cin>>bill;
	    
	    int remaining = 100 - bill;
	    int maxPayBack = (remaining / 10) * 10;

        cout << maxPayBack << '\n';
	    
	}

}

//Problem submission link: https://www.codechef.com/viewsolution/1149524704