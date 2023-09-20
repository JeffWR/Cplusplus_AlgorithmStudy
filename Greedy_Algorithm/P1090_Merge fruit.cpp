#include <iostream>
#include <algorithm>
#include <cmath>
#include <queue>
using namespace std;
priority_queue<int,vector<int>,greater<int>> q;
int sum=0;
int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i ++){
        int x;
        cin >> x;
        q.push(x);
    }
    while(q.size()>=2){
        
        int v=q.top();
        q.pop();
        int w=q.top();
        q.pop();
        sum+=w+v;
        q.push(w+v);
    }
    cout << sum << endl;
    return 0;
}
