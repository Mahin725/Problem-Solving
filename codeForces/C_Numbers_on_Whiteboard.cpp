#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tcase;cin>>tcase;
    while(tcase--)
    {
        int n;cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            arr[i]= i+1;
        }
        //manually dore bede frist tare 
        cout<<2<<"\n";
        int a =n, b= n-1;
        for(int i =0;i<n-1;i++)
        {
            cout<<a<<" "<<b<<"\n";
            a = (a + b + 1) / 2;
            b--;
        }
    }
    return 0;
}