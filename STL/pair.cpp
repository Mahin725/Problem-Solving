#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // all about pair>
    pair<string,int> student = {"Hasan",10};
    student.first = "rahim"; //for modify
    student.second = 23;
    //suppose you have an array of whole complex data-type. then you can take as array of pair

    int n;
    cin>>n;
    pair<string,int>students[n];
    for(int i =0; i<n;i++)
    {
        cin>>students[i].first>>students[i].second;
    }
    for (int i = 0; i < n; i++) {
        cout << students[i].first << " " << students[i].second << '\n';
    }
    
    return 0;
}