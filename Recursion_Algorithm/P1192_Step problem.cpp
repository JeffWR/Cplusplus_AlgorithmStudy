#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int a[10000100]={0};
    a[0]=1;
    for(int i = 1 ; i <= n; i ++){
        for(int j = 1; j <= k ; j ++){
            if(i-j>=0){
                a[i]+=a[i-j];
                a[i]%=100003;
            }
        }
    }
    cout << a[n] << endl;
    return 0;
}
