///DFS tree is very useful to  answer many of the problems in codeforces and codechef by simply understanding the traversal of graph using DFS.The tree formed by the DFS traversal is known as DFS TREE.
/**
    1-----2--5
    |        /
    |       /
    3------4
    so the above example is a cyclic graph when we apply DFS to any node then the graph after traversal look like this
        taking 1 as root

            1------2-----5
                         |
                         |
                         |
                         |
                    3----4
        hence after DFS traversal look like this it will not traverse the 1-3 edge forming a tree structure

**/

#include<bits/stdc++.h>
using namespace std;
vector<int> g[100];
int vis[101];
void dfstree(int s,int par){
vis[s]=1;
for(auto x  : g [s]){
    if(x==par)continue;
    if(vis[x]==0){
        cout<<s<<" - > " <<x;
        cout<<endl;
        dfstree(x,s);
    }
}
return ;

}
int main(){
    int n,m;
    cin>>n>>m;
    int a,b;
    while(m--){
        cin>>a>>b;
        g[a].push_back(b),g[b].push_back(a);
    }
    dfstree(1,-1);
return 0;
}



