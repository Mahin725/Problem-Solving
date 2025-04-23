    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n,m;
        cin>>n>>m;
        vector<int>arr1(n),arr2(m),res(n+m);
        for(int i =0; i<n;i++)
            cin>>arr1[i];   
        for(int i =0; i<m;i++)
            cin>>arr2[i];   
        
        //merge
        merge(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),res.begin());
        for(auto val:res)
            cout<<val<<" ";
        return 0;
    }