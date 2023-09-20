#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <queue>
using namespace std;
int a[1000];
int n,av,cnt;
int main(){
    cin >> n;
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
        av+=a[i];
    }
    av/=n;
    for(int i = 0 ; i < n ; i ++){
        a[i]-=av;
    }
    for(int i = 0 ; i < n ; i ++){
        if(a[i]==0) continue;
        a[i+1]=a[i]+a[i+1];
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
