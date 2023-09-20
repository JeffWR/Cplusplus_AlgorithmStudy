#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
char a[1000][1000];
void printer(long long x, long long y){
    a[x][y]='+';
    a[x+1][y]='-';
    a[x+2][y]='-';
    a[x+3][y]='-';
    a[x+4][y]='+';
    
    a[x][y-1]='|';
    a[x+1][y-1]=' ';
    a[x+2][y-1]=' ';
    a[x+3][y-1]=' ';
    a[x+4][y-1]='|';
    a[x+5][y-1]='/';
    
    a[x][y-2]='|';
    a[x+1][y-2]=' ';
    a[x+2][y-2]=' ';
    a[x+3][y-2]=' ';
    a[x+4][y-2]='|';
    a[x+5][y-2]=' ';
    a[x+6][y-2]='+';
    
    a[x][y-3]='+';
    a[x+1][y-3]='-';
    a[x+2][y-3]='-';
    a[x+3][y-3]='-';
    a[x+4][y-3]='+';
    a[x+5][y-3]=' ';
    a[x+6][y-3]='|';
    
    a[x+1][y-4]='/';
    a[x+2][y-4]=' ';
    a[x+3][y-4]=' ';
    a[x+4][y-4]=' ';
    a[x+5][y-4]='/';
    a[x+6][y-4]='|';
    
    a[x+2][y-5]='+';
    a[x+3][y-5]='-';
    a[x+4][y-5]='-';
    a[x+5][y-5]='-';
    a[x+6][y-5]='+';
    
}
int main(){
    
    for(int i = 0 ; i <= 1000 ; i ++){
        for(int j = 0 ; j <= 1000 ; j ++){
            a[i][j]='.';
        }
    }
    long long n,m;
    cin >> n >> m;
    long long s[n+5][m+5];
    long long k[100]={0};
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            cin >> s[i][j];
            k[i]=max(k[i],s[i][j]);
        }
        k[i]=k[i]*3+1+(n-i)*2;
    }
    long long o=0;
    for(int i = 0 ; i < n ; i ++){
        o=max(o,k[i]);
    }
    long p=m*4+2*n+1;
    long yl=0,xl=0;
    for(int i = 0 ; i < n ; i++){
        yl+=2;
    }
    yl++;
    for(int i = 0 ; i < n ; i++){
        xl+=2;
    }
    for(int j =0 ; j < n ; j ++){
        for(int i = 0 ; i < m ; i ++){
            for(int b = 0 ; b < s[j][i]; b++){
                printer(i*4+xl-2,o-(b*3-2)-yl);
            }
            
        }
        yl-=2;xl-=2;
    }
    
    
    for(int i = 0 ; i < o ; i ++){
        for(int j = 0 ; j < p; j ++){
            cout << a[j][i];
        }
        cout << endl;
    }
    
    return 0;
}
