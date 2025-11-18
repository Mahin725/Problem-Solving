#include <bits/stdc++.h>
using namespace std;

bool check_bits_on_or_off(int n, int k)
{
    return ((n >> k) & 1);
}
// prints all bit status
void print_bits_status(int n){
    for(int k=7; k>=0;k--){
        if(check_bits_on_or_off(n,k)){
            cout<<1<<" ";
        }else{
            cout<<0<<" ";
        }
    }
}

int trun_on_kth_bit(int n,int k){
    return (n|(1<<k));
}
int turn_off_kth_bit(int n,int k){
    return (n&(~(1<<k)));
}
int toggle_kth_bit(int n,int k){
    return (n^(1<<k));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // print_bits_status(45);
    // cout<<trun_on_kth_bit(45,4);
    // cout<<turn_off_kth_bit(45,2);  
    cout<<toggle_kth_bit(45,1);
    return 0;
}