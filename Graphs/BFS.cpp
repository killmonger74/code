#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int> g[1000];
int vis[1000];
int dis[1000];
void bfs(int s,int d){
    vis[s]=1;
queue<int> q;
q.push(s);
dis[s]=d;
while(!q.empty())
{
    int x=q.front(); q.pop();

    cout<<x<<" at level "<<dis[x]<<endl;
    for(auto f : g[x]){
        if(vis[f]==1) continue;
        vis[f]=1;
        q.push(f);
        dis[f]=dis[x]+1;
    }

}


return ;}

int main(){
int n,m;
cin>>n>>m;
int a,b;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        g[b].pb(a),g[a].pb(b);
    }
bfs(1,0);

}
