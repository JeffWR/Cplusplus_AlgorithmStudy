#include <iostream>
using namespace std;
int a[10005],b[10005],g[10005],k[10005];
int n,m;
int main(){
    int o;
    cin >> o;
    for(int i = 0 ; i < o ; i ++){
        cin >> a[i] >> b[i] >> g[i] >> k[i];
    }
    cin >> n >> m;
    int ans=-1;
    for(int i = 0; i < o ; i ++){
        if(n>=a[i] && m>=b[i] && n<=a[i]+g[i] && m<=b[i]+k[i]){
            ans=i+1;
        }
    }
    cout << ans << endl;
    return 0;
}
