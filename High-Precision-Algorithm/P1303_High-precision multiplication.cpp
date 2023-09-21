#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
char arr1[3000];
char arr2[3000];
int a[3000]={0};
int b[3000]={0};
int c[10000000]={0};
int main(){
    cin >> arr1;
    cin >> arr2;
    int len1=strlen(arr1);
    int len2=strlen(arr2);
    for(int i = 0 ; i < len1 ; i ++){
        a[i]=arr1[len1-i-1]-'0';
    }
    for(int i = 0 ; i < len2 ; i ++){
        b[i]=arr2[len2-i-1]-'0';
    }
    for(int i = 0 ; i < len1 ; i ++){
        for(int j = 0 ; j < len2 ; j ++){
            c[i+j+1]+=(c[i+j]+a[i]*b[j])/10;
            c[i+j]=(c[i+j]+a[i]*b[j])%10;
        }
    }
    int Mlen=len1+len2;
    while(c[Mlen]==0&&Mlen!=0){
        Mlen--;
    }
    for(int i = Mlen ; i >= 0; i -- ){
        cout << c[i];
    }
    cout << endl;
    return 0;
}
