#include <iostream>
#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;
struct node{
    int nxt,to,w;
}e[1000005];
int head[10005],dist[10005],book[10005],cost[10005];
int n,m,b,cnt;
void add(int x,int y,int z){
    e[++cnt].nxt = head[x];
    e[cnt].to = y;
    e[cnt].w = z;
    head[x] = cnt;
}
int check(int x){
    memset(dist,0x3f,sizeof(dist));
    memset(book,0,sizeof(book));
    dist[1] = 0;
    queue<int>q;
    q.push(1);
    book[1] = 1;
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        book[tmp] = 0;
        for(int i=head[tmp];i;i=e[i].nxt){
            int v = e[i].to;
            int w = e[i].w;
            if(dist[v]>dist[tmp]+w && cost[v]<=x){
                dist[v] = dist[tmp]+w;
                if(!book[v]){
                    q.push(v);
                    book[v] = 1;
                }
            }
        }
    }
    if(dist[n]<=b)return 1;
    else return 0;
}
int main(){
    cin>>n>>m>>b;
    for(int i=1;i<=n;i++)cin>>cost[i];
    for(int i=1;i<=m;i++){
        int x,y,z;
        cin>>x>>y>>z;
        add(x,y,z);
        add(y,x,z);
    }
    int l = 0,r = 1000000000;
    int ans = 0;
    while(l<=r){
        int mid = (l+r)>>1;
        if(check(mid)==1){
            r = mid-1;
            ans = mid;
        }
        else l = mid+1;
    }
    if(ans==0)cout<<"AFK"<<endl;
    else cout<<ans<<endl;
    return 0;
}
