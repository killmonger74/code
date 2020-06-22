#include<bits/stdc++.h>
using namespace std;
vector<int> g[101];
int vis[101];
int in[101],low[101],timer;
void findbridge(int s,int par){
vis[s]=1;
in[s]=low[s]=timer++;
    for(auto x : g[s]){
            if(x==par)continue;
            if(vis[x]==1)    ///back edge
            {
                low[s]=min(low[s],in[x]);
            }
            else{ /// forward edge
                findbridge(x,s);
                low[s]=min(low[x],low[s]);

                if( low[x] > in[s])cout<<s<<" - "<< x <<"   is a bridge"<<endl;
            }

        }


return ;
}


int main(){
    int n,m;
    cin>>n>>m;
    while(m--){
            int a,b;
        cin>>a>>b;
        g[a].push_back(b),g[b].push_back(a);
    }
    findbridge(1,-1);
    for(int i=1;i<=n ;i++)cout<<in[i]<<" " <<low[i]<<endl;
return 0;}
