/**
 * author: Raihanul Islam Sharif
 * Submission link: https://atcoder.jp/contests/abc191/submissions/64215146
 * platform: XPSC & Vjudge
 * Date: 27-03-25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[100005];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        
    }
   
    for (int i = 0; i < n; i++)
    {
        if(arr[i] !=0 && arr[i] != x){
            cout<<arr[i]<<" ";
        }
    }
    
    return 0;
};