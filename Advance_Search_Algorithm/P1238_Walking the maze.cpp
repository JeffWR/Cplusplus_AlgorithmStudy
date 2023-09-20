#include <iostream>
using namespace std;
int sx,sy,fx,fy,cnt,n,m;
int res;
int vis[20][20];
int dir[4][2]={0,-1,-1,0,0,1,1,0};
int pathx[50];
int pathy[50];
int f=0;
void dfs(int x,int y){//遍历(x,y)
    if(x==fx&&y==fy){
        f=1;
        for(int i = 0; i <= cnt-1 ; i ++){
            cout << "(" << pathx[i] << "," << pathy[i] << ")->";
        }
        cout << "(" << fx << "," << fy <<")"<< endl;
        return;
    }
    for(int i = 0 ; i < 4 ; i ++){
        int xx=x+dir[i][0];
        int yy=y+dir[i][1];
        if(vis[xx][yy]==1){
            vis[x][y]=0;
            pathx[cnt]=x;
            pathy[cnt]=y;
            cnt++;
            dfs(xx,yy);
            vis[x][y]=1;
            cnt--;
        }
    }
}
int main(){
    cin >> m >> n;
    for(int i = 1 ; i <= m ; i ++){
        for(int j = 1 ; j <= n ; j ++){
            cin >> vis[i][j];
        }
    }
    cin >> sx >> sy >> fx >> fy;
    vis[sx][sy]=1;
    dfs(sx,sy);
    if(f==0){
        cout << -1;
    }
    return 0;
}
