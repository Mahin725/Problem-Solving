#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int a[N];
void solve()
{
	int n,l,r;
	cin>>n>>l>>r;
	for(int i=1;i<=n;i++){
		if(i!=r){
			a[i]=i;
		} 
		else {
			a[i]=l-1;
		}
	}
	for(int i=1;i<=n;i++){
		int csl=a[i];
		csl^=a[i-1];
		cout<<csl<<' '; 
	}
	cout<<'\n';
}
int main()
{
	int _;
	cin>>_;
	while(_--){
		solve();
	}
 } 