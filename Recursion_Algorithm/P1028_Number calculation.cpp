#include <iostream>
#include <cmath>
using namespace std;
int n;
int a[1005];
int main(){
    cin>>n;
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= i/2 ; j ++){
            a[i]+=a[j];
        }
        a[i]++;
    }
    cout << a[n];
    return 0;
}
