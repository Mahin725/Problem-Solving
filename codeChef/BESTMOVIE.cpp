#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tcase;
    cin>>tcase;
    while(tcase--){
        int n;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++){
            int s,v;
            cin>>s>>v;
            if(s>6){
                a.push_back(v);
            }
        }
        if(a.empty()){
            cout<<-1<<endl;
            continue;
        }
        sort(a.begin(),a.end());
        cout<<a[0]<<endl;
    }
}
