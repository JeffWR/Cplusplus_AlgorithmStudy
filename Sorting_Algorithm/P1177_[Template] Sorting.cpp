#include<iostream>
#include<cstdio>
using namespace std;
int n,a[100001];
void qsort(int left,int right){
    int mid=a[(left+right)/2];
    int i=left;
    int j=right;
    while(i<=j){
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    if(j>left) qsort(left,j);
    if(i<right) qsort(i,right);
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    qsort(1,n);
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
