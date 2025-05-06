#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;
        string s ="#";
        for(int i=0; i<n;i++){
            s+="BAN";
        }
        n = s.size()-1;
        vector<pair<int,int>> ans;
        int l=2, r=n;
        while(l<r)
        {
            ans.push_back({l,r});
            swap(s[l],s[r]);
            l+=3;
            r-=3;
        }
        cout<<ans.size()<<endl;
        for(auto i:ans){
            cout<<i.first<<" "<<i.second<<endl;
        }
    }
    return 0;
}
