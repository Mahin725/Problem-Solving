#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tcase;
    cin>>tcase;
    while(tcase--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        long long ans=0;
        for(int i=0;i<k;i++){
            ans+=a[i];
        }
        cout<<ans<<endl;
    }
}
