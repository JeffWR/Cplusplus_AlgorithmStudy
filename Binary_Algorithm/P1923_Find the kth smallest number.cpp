#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long n,k,arr[5000100];
void qsort(long left,long right){
    long long mid=arr[(left+right)/2];
    long long i=left;
    long long j=right;
    while(i<=j){
        while(arr[i]<mid) i++;
        while(arr[j]>mid) j--;
        if(i<=j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    if(k<=j) qsort(left,j);
    else if(k>=i) qsort(i,right);
    else{
        printf("%lld", arr[j+1]);
        exit(0);
    }
}
int main(){
    scanf("%lld%lld",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    qsort(0,n-1);
    return 0;
}
