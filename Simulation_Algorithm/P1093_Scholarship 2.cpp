#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
struct node{
    int yuwen;
    int shuxue;
    int yingyu;
    int total;
    int id;
}a[3005];
bool cmp(node a,node b){
    if(a.total==b.total){
        if(a.yuwen==b.yuwen) return a.id<b.id;
        else return a.yuwen>b.yuwen;
    }else{
        return a.total>b.total;
    }
}
int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i ++){
        cin >> a[i].yuwen >> a[i].shuxue >> a[i].yingyu;
        a[i].id=i+1;
        a[i].total=a[i].yuwen+a[i].shuxue+a[i].yingyu;
    }
    sort(a,a+n,cmp);
    for(int i = 0 ; i < 5; i ++){
        cout << a[i].id << " " << a[i].total << endl;
    }
    return 0;
}
