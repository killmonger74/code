/// DSU is a important  data structure ,that took O(e) in formation and helpful in finding the connected component in graphs 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int par[100];
int  find1(int a){
if(par[a]==a)return par[a];
else return par[a]=find1(par[a]);

}

void union1(int a ,int b){
par[b]=par[a];
return;
}
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    par[i]=i;

}
int e;
cin>>e;
for(int i=0;i<e;i++)
{   int a,b;
    cin>>a>>b;
    int x=find1(a);
    int y=find1(b);

    if(x!=y){

        union1(a,b);


    }

}
    for(int i=1;i<=n;i++){ ///This is for the handling the corner cases 

            int x=find1(i);
            int y=find1(par[i]);
            if(x!=y)union1(x,y);

    }
for(int i=1;i<=n;i++){
    cout<<i<<" " <<par[i]<<endl;
}
}
