#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;cin>>tcase;
    while(tcase--)
    {
        int ans =0;
        int one = 0;
        int n;cin>>n;
        for(int i =0; i<n;i++)
        {
            int x;cin>>x;
            if(x>1){
                ans++;
            }else{
                one++;
            }
        }
        if(one>0 && one%2!=0)
        {
            cout<<ans+one/2+1<<endl;
        }else{
            cout<<ans+one/2<<endl;
        }
        
    }
    return 0;
}
