#include <iostream>
#include <algorithm>
#include <cmath>
#include <queue>
using namespace std;
long long tree[500005],a[500005];
long long n;
long long tag[500005];
void pushup(int p){
    tree[p] = min(tree[p*2] , tree[p*2+1]);
}
void pushdown(int l,int r,int p){
    if(tag[p]!=0){
        tag[p*2] += tag[p];
        tag[p*2+1] += tag[p];
        int m = (l+r)/2;
        tree[p*2] += tag[p]*(m-l+1);
        tree[p*2+1] += tag[p]*(r-m);
        tag[p] = 0;
    }
}
void build(int l,int r,int p){
    if(l==r){
        tree[p] = a[l];
        return;
    }
    int m = (l+r)>>1;
    build(l,m,p<<1);
    build(m+1,r,p<<1|1);
    pushup(p);
    
}

long long query(int l,int r,int p,int L,int R){
    if(L<=l && r<=R){
        return tree[p];
    }
    pushdown(l,r,p);
    int m = (l+r)>>1;
    long long sum = 999999999999;
    if(L<=m)sum = min(sum,query(l,m,p*2,L,R));
    if(R>m)sum = min(sum,query(m+1,r,p*2+1,L,R));
    return sum;
}
int main(){
    int n,m;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        build(1,n,1);
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            cout<<query(1,n,1,x,y)<<' ';
        }
    return 0;
}
