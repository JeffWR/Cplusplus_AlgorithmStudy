#include <iostream>
using namespace std;
int a[1000][1000];
int main(){
    int n,m;
    cin >> n >> m;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            cin >> a[i][j];
        }
    }
    for(int i = 1 ; i < n ; i ++){
        for(int j = m-1 ; j >= 0 ; j --){
            a[i][j]+=max(a[i-1][j],max(a[i-1][j-1],a[i-1][j+1]));
        }
    }
    cout << max(max(a[n-1][(m-1)/2-1],a[n-1][(m-1)/2+1]),a[n-1][(m-1)/2]) << endl;
    return 0;
}
