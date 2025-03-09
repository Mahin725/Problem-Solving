#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    string goals[n+1];
    for(int i =0; i<n;i++){
        cin>>goals[i];
    }
    int cnt_a =0;
    int cnt_b =0;
    string team_a = goals[0];
    string team_b;
    for(int i =0; i<n;i++){
        if(goals[i]==team_a){
            cnt_a++;
        }else{
            team_b = goals[i];
            cnt_b++;
        }
    }
    if(cnt_a > cnt_b){
        cout<<team_a<<endl;
    }else{
        cout<<team_b<<endl;
    }
    // cout<<cnt_a<<" "<<goals[0]<<endl;
    return 0;
}