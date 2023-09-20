#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
struct q{
    string name;
    int y;
    int m;
    int d;
    int num;
}a[1000];
int cmp(q a, q b ){
    if(a.y<b.y)return 1;
    if(a.y>b.y)return 0;
    if(a.y==b.y)
    {
        if(a.m<b.m)return 1;
        if(a.m>b.m)return 0;
        if(a.m==b.m)
        {
            if(a.d<b.d)return 1;
            if(a.d>b.d)return 0;
            if(a.d==b.d)
            {
                if(a.name>b.name)return 1;
                else return 0;
            }
        }
    }
    return 0;
}
using namespace std;
int main(){
    int n ;
    cin >> n;
    q a[1000];
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i].name >> a[i].y >> a[i].m >> a[i].d;
        a[i].num=i;
    }
    sort(a,a+n,cmp);
    for(int i = 0 ; i < n ; i ++){
        cout << a[i].name << endl;
    }
    return 0;
}
