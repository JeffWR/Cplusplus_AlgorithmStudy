#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;
long long num[1000100];
long long n;
long long m;
bool judge(long long x){
    long long sum=0;
    for(int i = 1 ; i <= n ; i ++){
        if(num[i]>x){
            sum+=num[i]-x;
        }
    }
    if(sum>=m) return true;
    else return false;
}
int main(){
    
    cin >> n >> m;
    long long xmax=0;
    for(int i = 1 ; i <= n ; i ++){
        cin >> num[i];
        xmax=max(xmax,num[i]);
    }
    long long left=0;
    long long right=xmax;
    while(left<right-1){
        long long  mid=(left+right)/2;
        if(judge(mid)){
            left = mid;
        }else{
            right = mid;
        }
    }
    cout << left;
    return 0;
}
