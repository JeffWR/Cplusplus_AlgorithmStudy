#include<cmath>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n,m,ans;
struct node{
    int a,b;
};
node a[5005];
bool cmp(node a,node b){
    if(a.a!=b.a)return a.a<b.a;
    else return a.b>b.b;
}

int main(){
    cin>>n>>m;
    for(int i=0;i<m;i++)
        cin>>a[i].a>>a[i].b;
    sort(a,a+m,cmp);
    int i=0;
    while(n){
        if(a[i].b!=0){
            a[i].b--;
            ans+=a[i].a;
            n--;
        }
        else i++;
    }
    cout<<ans;
    return 0;
}
