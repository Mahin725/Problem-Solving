#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>a;
    a.push_back(1);
    a.push_back(2);
    a.pop_back();
    cout<<a.front()<<endl;
    a.push_back(3);
    cout<<a.back();
    return 0;
}