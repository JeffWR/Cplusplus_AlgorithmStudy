#include <iostream>
using namespace std;
int main(){
    int m,s,t;
    cin >> m >> s >> t;
    int bs=0;
    int xs=0;
    for(int i = 1 ; i <= t ; i ++){
        bs+=17;
        if(m>=10){
            xs+=60;
            m-=10;
        }else{
            m+=4;
        }
        if(xs>bs){
            bs=xs;
        }
        if(s<bs){
            cout << "Yes" << endl;
            cout << i << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    cout << bs << endl;
    return 0;
}
