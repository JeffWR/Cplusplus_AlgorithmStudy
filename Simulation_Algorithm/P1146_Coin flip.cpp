#include <iostream>
using namespace std;
int a[105];
int main(){
    int n;
    cin >> n;
    cout << n << endl;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < n ; j ++){
            if(j!=i){
                if(a[j]==0){
                    a[j]=1;
                }else{
                    a[j]=0;
                }
                cout << a[j];
            }else{
                cout << a[i];
            }
        }
        cout << endl;
    }
    return 0;
}
