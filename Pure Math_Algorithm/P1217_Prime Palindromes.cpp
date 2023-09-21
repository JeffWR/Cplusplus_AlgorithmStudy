#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
    long long n,m;
    scanf("%lld%lld",&n,&m);
    if(n%2==0)n++;
    if(m>9999999)m=9999999;
    for(long long i = n ; i <= m ; i ++ ){
        long long s=i;
        long long y=0;
        while(s>0){
            y=y*10+s%10;
            s/=10;
        }
        if(y==i){
            int f=0;
            for(long long j = 2; j < sqrt(i)+1 ; j ++){
                if(i%j==0){
                    f=1;
                    break;
                }
            }
            if(f==0){
                printf("%lld\n",i);
            }
        }
    }
    return 0;
}
