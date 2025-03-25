#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase; cin>>tcase;
    

    while(tcase--)
    {
        int count =0;
        int n; cin>>n;
        for(int i =1; i<n;i++)
        {
            if(i+n-i==n){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}