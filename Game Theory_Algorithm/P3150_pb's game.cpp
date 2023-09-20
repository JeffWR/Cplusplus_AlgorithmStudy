#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[10000000];
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
        if(a[i]%2==0){
            cout << "pb wins" << endl;
        }else{
            cout << "zs wins" << endl;
        }
    }
    return 0;
}
