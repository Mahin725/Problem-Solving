//Contest Link: https://www.hackerrank.com/contests/assignment-01-a-introduction-to-algorithms-a-batch-06/challenges/connected-or-not-1-1/submissions/code/1388235446


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;
    cin>>n>>e;
    int adj_matrix[n][n];
    memset(adj_matrix,-1,sizeof(adj_matrix));
     for(int i =0; i<n;i++)
        for(int j =0; j<n;j++)
            if(i==j)
                adj_matrix[i][j] = 1;

    //take matrix input
    for(int i =0; i<e;i++){
        int a,b;
        cin>>a>>b;
        adj_matrix[a][b] = 1;
    }
    // //print matrxi
    // for(int i = 0; i<n; i++){
    //     for(int j =0; j<n;j++){
    //         cout<<adj_matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int query;cin>>query;
    while(query--){
        int a,b; cin>>a>>b;
        if(adj_matrix[a][b]==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

