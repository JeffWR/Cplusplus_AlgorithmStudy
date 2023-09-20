#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int sum=0;
int a[100100]={0};
int main(){
    int w,n;
    cin >> w >> n;
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    sort(a,a+n);
    int l=0,r=n-1;
    while(l<=r){
        if(a[l]+a[r]<=w){
            l++;
            r--;
            sum++;
        }else{
            r--;
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
