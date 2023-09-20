#include <iostream>
#include <cmath>
using namespace std;
int c[100000];
int v[100000];
int dp[10000000];
int main(){
    int n,w;
    cin >> n >> w;
    int count=1;
    for(int i = 1; i <=n ; i ++){
        int x,y,z;
        cin >> x >> y >> z;
        for(int j=1 ; j <=z ; j<<=1){
            c[count]=j*x;
            v[count]=j*y;
            count++;
            z=z-j;
        }
        if(z>0){
            c[count]=z*x;
            v[count]=z*y;
            count++;
        }
    }
    for(int i = 1 ; i <= count ; i++){
        for(int j = w ; j>=v[i] ; j--){
            dp[j]=max(dp[j],dp[j-v[i]]+c[i]);
        }
    }
    cout << dp[w] << endl;
    return 0;
}
