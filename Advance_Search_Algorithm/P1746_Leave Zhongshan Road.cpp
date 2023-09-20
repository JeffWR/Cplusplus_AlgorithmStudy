#include <iostream>
#include <queue>
using namespace std;
queue<int> x,y;
int n,sx,sy,ex,ey;
char Map[1100][1100];
int vis[1100][1100]={0};
int temp[1100][1100]={0};
int d[4][2]={1,0,0,1,-1,0,0,-1};
int flag=0;
int main(){
    cin >> n ;
    temp[1][1]=1;
    for(int i = 1; i <= n ; i ++){
        for(int j = 1 ; j <= n ; j ++){
            cin >> Map[i][j];
            if(Map[i][j]=='1'){
                vis[i][j]=1;
            }
        }
    }
    cin >> sx >> sy >> ex >> ey;
    x.push(sx);
    y.push(sy);
    while(!x.empty()){
        if(x.front()==ex&&y.front()==ey){
            flag=1;
            break;
        }
        vis[x.front()][y.front()]=1;
        for(int i = 0 ; i < 4 ; i ++){
            int tx=x.front()+d[i][0];
            int ty=y.front()+d[i][1];
            if(tx>=1&&tx<=n&&ty>=1&&ty<=n&&vis[tx][ty]==0){
                x.push(tx);
                y.push(ty);
                temp[tx][ty]=temp[x.front()][y.front()]+1;
                vis[tx][ty]=1;
                if(tx==ex&&ty==ey){
                    break;
                }
            }
        }
        x.pop();
        y.pop();
    }
    
    if(flag)cout << temp[ex][ey] << endl;
    else cout << "-1" << endl;
    return 0;
}
