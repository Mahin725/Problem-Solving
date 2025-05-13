/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem : B_Fun_Game.cpp
 * platform: 
 * Date: 13 - 05 - 2025
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        int n;
        cin>>n;
        string s, t;
        cin >> s >> t;
        if (s == t || s[0] == '1')
        {
            cout << "YES\n";
            continue;
        }
        int pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1'){
                pos= i;
                break;
            }
        }
        if(pos !=-1){
            bool okey = true;
            for(int i=0; i<n;i++){
                if(s[i]!=t[i]){
                    if(pos >i){
                        okey = false;
                        break;
                    }
                }
            }
            if(okey){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}