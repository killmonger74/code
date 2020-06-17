
#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int> adj[1000];
int vis[1000];
int dis[1000];
void dfs(int a){
vis[a]=1;
cout<<a<<endl;
for(auto  child: adj[a]){
    if(vis[child]==0)
        dfs(child);
}
return ;
}


int main(){
int n,m;
cin>>n>>m;
int a,b;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        adj[b].pb(a),adj[a].pb(b);///Just creating a Adjacency list using array of vector
    }
dfs(1); /// making call at 1 supposing that is root or we can make call to any node,if it is single connected component then we can traverse the graph whole by making call at any node in the adjacency list


}
