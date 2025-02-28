#include <bits/stdc++.h>
using namespace std;
int par[100005];
int group_size[100005];

int find(int node)
{
    if(par[node]== -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}
void dsu_union(int node1,int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    if(group_size[leader1]>=group_size[leader2]){
        par[leader2] = leader1;
        group_size[leader1]+=group_size[leader2];
    }else{
        par[leader1] = leader2;
        group_size[leader2] +=group_size[leader1];
    }
}
int main()
{
    memset(par,-1,sizeof(par));
    memset(group_size,1,sizeof(group_size));
    //nijer hate union korai disse
    int n,e;
    cin>>n>>e;
    int count =0;
    while(e--){
        int a,b;
        cin>>a>>b;
        int leaderA = find(a);
        int leaderB = find(b);
        if(leaderA==leaderB){
            count++;
        }else{
            dsu_union(a,b);
        }
    }
    cout<<count<<endl;
    return 0;
}