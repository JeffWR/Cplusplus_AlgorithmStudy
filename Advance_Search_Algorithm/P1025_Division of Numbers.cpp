#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int n,k;
int num=0;
void dfs(int a,int b,int c){
    if(b==1){
        num++;
        return;
    }
    for(int i = a; i <= c/b ; i++){
        dfs(i,b-1,c-i);
    }
}
int main(){
    cin >> n >> k;
    dfs(1,k,n);
    cout << num << endl;
    return 0;
}
