#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;

    map<string,string> ip_name;
    //server er datainput niisi
    for(int i =0; i<n;i++)
    {
        string name,ip;
        cin>>name>>ip;
        ip_name[ip] = name;
    }

    for(int i = 0; i<m;i++)
    {
        string cmd,ip_with_semi;
        cin>>cmd>>ip_with_semi;
        string ip = ip_with_semi.substr(0, ip_with_semi.size() - 1);
        cout << cmd << " " << ip_with_semi << " #" << ip_name[ip] << endl;
    }
    return 0;
}