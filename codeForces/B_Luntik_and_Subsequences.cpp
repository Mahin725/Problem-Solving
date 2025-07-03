#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    long long int t,n,i,c1,c2,x;
    cin>>t;
    while (t--)
    {
        cin>>n;
        c1=c2=0;
        while (n--)
        {
            cin>>x;
            if(x==0){
                c1++;
            }else if(x==1){
                c2++;
            }
        }
        cout<<(long long)((long long)1<<c1)*c2<<endl;
    }
    
    return 0;
}