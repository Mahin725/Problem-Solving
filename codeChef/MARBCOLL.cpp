/**
 * IN THE NAME OF ALLAH
 * author: RIHANUL ISLAM
 * 
 * */ 

#include <bits/stdc++.h>
using namespace std;



void saomi(){
    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    for(int i=0;i<n;i++){   //o(N)
        int val;
        cin>>val;
        mp[val]++;  //O(log N)
    }
    int sizeOfMap = mp.size();
    cout<<m-sizeOfMap<<endl;
}
// in here we will do optimize this Problem. like unordered_map use korbo. 
//karone unordered_map e insert & accessing e avg case e O(1) e hoi. so unordered_map use korbo.
int main() {
	int tcase;
	cin>>tcase;
	while(tcase--){
	    saomi();
	}

}
