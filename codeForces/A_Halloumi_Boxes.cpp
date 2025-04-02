/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem link: https://codeforces.com/problemset/problem/1903/A
 * platform: coderforces -800*
 * Date: 02 - 04 - 2025
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;cin>>tcase;
    while(tcase--)
    {
        int n,k; cin>>n>>k;
        int arr[n+1];
        bool isSorted = true;
        for(int i =0; i<n;i++)
        {
            cin>>arr[i];
            if(i > 0){
                if(arr[i-1] > arr[i]){
                    isSorted = false;
                }
            }
        }
        if(isSorted)
        {
            cout<<"YES"<<endl;
        }else{
            if(k >1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}