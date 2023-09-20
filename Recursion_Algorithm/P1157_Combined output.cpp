#include <iostream>
#include <cstdio>
using namespace std;
int n,r;
int num[100000];
int vis[100000];
void f(int x){
    if(x==r+1){
        for(int i = 1 ; i <= r ; i ++){
            printf("%3d",num[i]);
        }
        cout << endl;
        return;
    }
    for(int i = num[x-1]+1 ; i <= n ; i ++){
        if(vis[i]==0){
            num[x]=i;
            vis[i]=1;
            f(x+1);
            vis[i]=0;
        }
    }
}
int main(){
    cin >> n >> r;
    f(1);
    return 0;
}
