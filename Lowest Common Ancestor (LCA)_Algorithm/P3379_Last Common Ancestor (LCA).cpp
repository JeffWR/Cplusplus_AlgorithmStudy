#include <iostream>
#include <cstdio>
#include <queue>
#include <cmath>
using namespace std;
struct node{
    int nxt,to;
}e[1000005];
int head[5000005],dep[500005],f[500005][35];
int cnt;
int n,m,s,t;
void add(int x,int y){
    cnt++;
    e[cnt].nxt = head[x];
    head[x] = cnt;
    e[cnt].to = y;
}
void bfs(){
    dep[s] = 1;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        for(int i=head[tmp];i!=0;i=e[i].nxt){
            int v = e[i].to;
            if(dep[v]==0){
                dep[v] = dep[tmp]+1;
                q.push(v);
                f[v][0] = tmp;
                for(int j=1;j<=t;j++){
                    f[v][j] = f[f[v][j-1]][j-1];
                }
            }
        }
    }
}
int lca(int x,int y){
    if(dep[x]>dep[y])swap(x,y);
    for(int i=t;i>=0;i--){
        if(dep[f[y][i]]>=dep[x])y = f[y][i];
    }
    if(x==y)return x;
    for(int i=t;i>=0;i--){
        if(f[y][i]!=f[x][i]){
            x = f[x][i];
            y = f[y][i];
        }
    }
    return f[x][0];
}
int main(){
    cin>>n>>m>>s;
    t = log(n)/log(2)+1;
    for(int i=1;i<n;i++){
        int x,y;
        cin>>x>>y;
        add(x,y);
        add(y,x);
    }
    bfs();
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        cout<<lca(x,y)<<endl;
    }
    return 0;
}
