#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int V,N;
    cin >> V >> N;
    int dp[50000];
    int C[100000];
    for(int i = 0 ; i < N ; i ++){
        cin >> C[i] ;
    }
    for(int i = 0 ; i < N ; i ++){
        for(int j = V ; j >= 0 ; j --){
            if(j<C[i]){
                break;
            }
            dp[j]=max(dp[j],dp[j-C[i]]+C[i]);
        }
    }
    cout << V-dp[V] << endl;
    return 0;
}
