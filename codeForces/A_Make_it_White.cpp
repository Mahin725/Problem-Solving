/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem link: 
 * platform: codeforces div3
 * Date: 07 - 04 - 2025
*/

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
        string s;
        cin>>s;
        int startPos = -1;
        int endPos = -1;
        for(int i =0; i<n;i++)
        {
            if(s[i] =='B'){
                startPos = i;
                break;
            }
        }
        for(int i = n-1; i !=-1; i--)
        {
            if(s[i] =='B'){
                endPos = i;
                break;
            }
        }
        cout<<abs(endPos-startPos+1)<<endl;
    }   
    return 0;
}