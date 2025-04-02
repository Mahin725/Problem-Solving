/**
 * Bismillahhir Rahmanir Rahim
 * author: Raihanul Islam Sharif
 * Problem link: https://codeforces.com/problemset/problem/1901/A
 * platform: codeforces
 * Date: 02 - 04 - 2025
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;cin>>tcase;
    while(tcase--)
    {
        int n,x;cin>>n>>x;
        vector<int>points_arr;
        points_arr.push_back(0);
        for(int i =0; i<n;i++)
        {
            int point;cin>>point;
            points_arr.push_back(point);
        }
        points_arr.push_back(x);
        n = points_arr.size();
        int mx_distance = INT_MIN;
        for(int i =1; i<n;i++){
            if(i ==n-1)
            {
                mx_distance = max(mx_distance,2 * (points_arr[i]-points_arr[i-1]));
            }else{
                mx_distance = max(mx_distance,points_arr[i]-points_arr[i-1]);
            }
        }
        cout<<mx_distance<<endl;

    }
    return 0;
}