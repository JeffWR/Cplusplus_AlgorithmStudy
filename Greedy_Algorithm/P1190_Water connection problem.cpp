#include <iostream>
#include <algorithm>
#include <cmath>
#include <queue>
using namespace std;
priority_queue<int,vector<int>,greater<int>> q;
int n,m;
int sum=0;
int a[100005];
int main(){
    cin >> n >> m;
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
        if(i<m)
            q.push(a[i]);
    }
    for(int i=m;i<n;i++){
        sum=q.top();
        q.pop();
        sum+=a[i];
        q.push(sum);
    }
    for(int i = 1 ; i < m ; i ++)q.pop();
    cout << q.top() << endl;
    return 0;
}
