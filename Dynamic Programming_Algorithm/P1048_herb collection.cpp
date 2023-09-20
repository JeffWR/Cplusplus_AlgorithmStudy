#include <iostream>
using namespace std;
int v[10000];
int w[10000];
int dp[1500][1500]={0};
int main(){
    int n,m;
    cin >> m >> n;
    for(int i = 1 ; i <= n ; i ++){
        cin >> v[i] >> w[i];
    }
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1; j <= m ; j ++){
            if(j>=v[i]){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-v[i]]+w[i]);
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}
