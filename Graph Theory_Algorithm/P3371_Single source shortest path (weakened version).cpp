#include <iostream>
#include <queue>
using namespace std;
queue<int> q;
struct node{
    int x,y,w,next;
}e[5001005];
long long cnt=0,head[100100],dist[100100],book[100100];
void add(int x,int y,int w){
    cnt++;
    e[cnt].x=x;
    e[cnt].y=y;
    e[cnt].w=w;
    e[cnt].next=head[x];
    head[x]=cnt;
    
}
int main(){
    int n,m,s;
    int a,b,c;
    cin >> n >> m >> s;
    for(int i = 1 ; i <=n ; i ++){
        dist[i]=(1<<31)-1;
    }
    for(int i = 1 ; i <= m ; i ++){
        cin >> a >> b >> c;
        add(a,b,c);
    }
    dist[s]=0;
    book[s]=1;
    q.push(s);
    while(!q.empty()){
        int now=q.front();
        q.pop();
        book[now]=0;
        for(int i = head[now]; i!=0 ; i =e[i].next){
            int v=e[i].y;
            int w=e[i].w;
            if(dist[v]>dist[now]+w){
                dist[v]=dist[now]+w;
                if(book[v]==0){
                    q.push(v);
                    book[v]=1;
                }
            }
        }
    }
    for(int i = 1 ; i <= n ; i ++){
        cout << dist[i] << " ";
    }
    cout << endl;
    return 0;
}
