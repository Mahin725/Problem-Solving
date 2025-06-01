/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : E_Eating_Queries.cpp
 * platform: 
 * Date: 02 - 06 - 2025
 */


 //
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin>>tcase;
    while(tcase--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>a(n+1),prefix(n+1);
        
        for(int i=0; i<n;i++)
            cin>>a[i];
        
        sort(a.rbegin(),a.rend());
        for(int i=1; i<=n;i++){
            prefix[i] = prefix[i-1]+a[i-1];
        }

        while(q--)
        {
            int key,cnt= -1;
            cin>>key;
            //lowerbound
            auto it = lower_bound(prefix.begin(),prefix.end(),key);
            if(it != prefix.end())
            {
                cnt = it-prefix.begin();
            }
            cout<<cnt<<endl;

        }
    }   
    return 0;
}