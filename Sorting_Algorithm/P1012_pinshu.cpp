#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int a[100];
int x[100];
int xi[100];
int s[100];
int si[100];
int cmp(int a,int b){
    return a>b;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
        int k=0;
        int sx=0;
        int m=a[i];
        while(m>=10){
            sx=m;
            m/=10;
        }
        s[i]=sx;
        si[i]=i;
        m=a[i];
        while(m!=0){
            k=m;
            m/=10;
        }
        x[i]=k;
        xi[i]=i;
    }
    for(int j= n-1 ; j>=0 ; j --){
        for(int i = 0 ; i < j ; i ++){
            if(x[i]<x[i+1]){
                swap(x[i],x[i+1]);
                swap(xi[i],xi[i+1]);
            }else if(x[i]==x[i+1]){
                if(s[i]<s[i+1]){
                    swap(x[i],x[i+1]);
                    swap(xi[i],xi[i+1]);
                }
            }
        }
    }
    for(int i = 0 ; i < n ; i ++){
        cout << a[xi[i]];
    }
    cout << endl;
    return 0;
}
