#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int par[100];
int  find1(int a){
if(par[a]==a)return par[a];
else return par[a]=find1(par[a]);

}
void updateparent(int b,int n){
    for(int i=1;i<=n;i++){
        if(par[i]==b)par[i]=par[b];
    }
    return ;
}
void union1(int a ,int b,int n){
par[b]=par[a];
updateparent(b,n);
return;
}
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    par[i]=i;
    ///ra[i]=0;
}
int e;
cin>>e;
for(int i=0;i<e;i++)
{   int a,b;
    cin>>a>>b;
    int x=find1(a);
    int y=find1(b);
   /// cout<<"X" <<x << " Y"<<y<<endl;
    if(x!=y){

        union1(a,b,n);

        ///updatepar(a,b);
    }

}
for(int i=1;i<=n;i++){
    cout<<i<<" " <<par[i]<<endl;
}
}
