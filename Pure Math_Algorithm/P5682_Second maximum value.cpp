#include <iostream>
#include <algorithm>
using namespace std;
int a[300005];
int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i ++) cin >> a[i];
    sort(a,a+n);
    n = unique(a, a+n) - a - 1;
    cout << a[n] % a[n-1] << endl;
    return 0;
}
