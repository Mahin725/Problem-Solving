#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    // to define Tuple
    tuple<string,int,string>student = {"Rahim",10,"017892"};
    //to access tuple
    cout<<get<0>(student)<<" "<<get<1>(student)<<" "<<get<2>(student);
    //another apporch to access tuple
    auto [name,roll,phoneNumber] = student;
    
    //we have alot of apporch but its important........
    return 0;
}