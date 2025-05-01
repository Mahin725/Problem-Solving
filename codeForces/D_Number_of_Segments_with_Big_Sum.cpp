#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    long long s;cin>>s;
    vector<int>a(n);
    for(int i=0; i<n;i++)
        cin>>a[i];
    long long ans =0 ,sum=0;
    int left =0,right=0;
    while(right <n)
    {
        sum+=a[right];
        while (sum >= s) {
            ans += n - right;
            sum -= a[left++];
        }
        right++;
    }
    cout<<ans<<endl;
    return 0;
}