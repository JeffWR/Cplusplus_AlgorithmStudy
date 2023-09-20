#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
unsigned long long a[30][30];
int main(){
    long long xb,yb;
    long long xm,ym;
    cin >> xb >> yb;
    cin >> xm >> ym;
    
    for(int i = 0 ; i <= xb ; i ++){
        for(int j = 0 ; j <= yb ; j ++){
            a[i][j]=1;
        }
    }
    a[xm][ym]=0;
    if (xm>=2 && ym+1<=yb)
        a[xm-2][ym+1]=0;
    if (xm>=2 && ym>=1)
        a[xm-2][ym-1]=0;
    if (xm+2<=xb && ym>=1)
        a[xm+2][ym-1]=0;
    if (xm+2<=xb && ym+1<=yb)
        a[xm+2][ym+1]=0;
    if (xm+1<=xb && ym+2<=yb)
        a[xm+1][ym+2]=0;
    if (xm+1<=xb && ym>=2)
        a[xm+1][ym-2]=0;
    if (xm>=1 && ym+2<=yb)
        a[xm-1][ym+2]=0;
    if (xm>=1 && ym>=2)
        a[xm-1][ym-2]=0;
    
    for(int i = 0 ; i <= xb ; i ++ ){
        for(int j = 0; j <= yb ; j ++){
            if(i==0&&j==0){
                continue;
            }
            if(a[i][j]==0){
                continue;
            }
            if(i==0&&j!=0){
                a[i][j]=a[i][j-1];
            }else if(j==0&&i!=0){
                a[i][j]=a[i-1][j];
            }else{
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
        }
    }
    cout << a[xb][yb] << endl;
    return 0;
}
