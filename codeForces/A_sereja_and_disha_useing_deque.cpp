#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>card(n);
    for(int i =0; i<n;i++)
    {
        cin>> card[i];
    }
    sort(card.rbegin(),card.rend());
    long long serejaSum = 0;
    long long deshaSum = 0;
    for(int i =0; i<n;i+=2){
        serejaSum+=card[i];
    }
    for(int i =1; i<n;i+=2){
        deshaSum+=card[i];
    }
    cout<<serejaSum <<" "<<deshaSum<<endl;
    return 0;
}